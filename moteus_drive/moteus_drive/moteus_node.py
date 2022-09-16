#!/usr/bin/python3
import threading
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor
from moteus_drive.moteus_control.MoteusDrive import MoteusDrive
import moteus
from moteus_msgs.msg import MoteusState, MoteusStateStamped, MoteusCommandStamped

class MoteusNode(Node):
    def __init__(self):
        super().__init__('moteus_drive')
        # declare parameters
        self.declare_param()
        
        # get parameters values
        self.frame_id = self.get_parameter("frame_id").value
        self.rezero_on_startup = self.get_parameter("rezero_on_startup").value
        self.devices = self.get_parameter("moteus_ids").value
        
        # initialize variables and objects
        self.command = None
        self.time_command = self.get_clock().now().to_msg()
        self.time_command_seconds = self.get_clock().now().to_msg()
        self.recv_command = {}
        
        # initialize moteus drive cycle
        self.moteusDrive = MoteusDrive(self.devices)
        
        # initialize start state drive
        self.drive_rezero()
        
        # create thread for moteus drive cycle
        thread = threading.Thread(target=self.moteusDrive.run_start, args=())
        thread.daemon = True
        
        #start thread
        thread.start()
        self.get_logger().info('MoteusNode started')
        
        # create publisher for moteus state
        self.publisher_ = self.create_publisher(MoteusStateStamped, 'moteus_feedback', 10)
        self.subscriber_ = self.create_subscription(MoteusCommandStamped, 'moteus_command', self.callback_command, 10)
    
        # create timer interval
        self.timer_state = self.create_timer(0.1, self.state_check)
        self.timer_update = self.create_timer(0.01, self.interval_update)
        
    def declare_param(self):
        self.declare_parameter("frame_id", "moteus_drive", ParameterDescriptor(description="Frame ID"))
        self.declare_parameter("rezero_on_startup", False, ParameterDescriptor(description="Rezero on startup"))
        self.declare_parameter("moteus_ids",[1], ParameterDescriptor(description="Moteus IDs"))

    def callback_command(self, msg):
        self.time_command = msg.header.stamp
        self.commands = msg.commands
        self.recv_command = {}
        for idx, command in enumerate(self.commands):
            self.recv_command[command.device_id] = {"velocity": command.velocity, "maximum_torque": command.maximum_torque, "position": None}
        # send commands
        self.moteusDrive.set_state_command(self.recv_command)
        
    def state_check(self):
        now_seconds = self.get_clock().now().to_msg()
        now_seconds = float(str(now_seconds.sec) + '.' + str(now_seconds.nanosec))
        self.time_command_seconds = float(str(self.time_command.sec) + '.' + str(self.time_command.nanosec))
        timeout = now_seconds - self.time_command_seconds
        print(timeout)
        if timeout >= 1: #timeout 1 second emergency stop
            self.moteusDrive.set_state_brake()

    def interval_update(self):
        feedback = self.moteusDrive.get_feedback()
        if feedback is not None:
            moteusStateStamped = MoteusStateStamped()
            moteusStateStamped.header.frame_id = self.frame_id
            moteusStateStamped.header.stamp = self.get_clock().now().to_msg()
            for index, device in enumerate(self.devices):
                moteusStateMsg = MoteusState()
                moteusStateMsg.device_id = device
                moteusStateMsg.mode = feedback[index].values[moteus.Register(device).MODE]
                moteusStateMsg.position = feedback[index].values[moteus.Register(device).POSITION]
                moteusStateMsg.velocity = feedback[index].values[moteus.Register(device).VELOCITY]
                moteusStateMsg.torque = feedback[index].values[moteus.Register(device).TORQUE]
                moteusStateMsg.voltage = feedback[index].values[moteus.Register(device).VOLTAGE]
                moteusStateMsg.temperature = feedback[index].values[moteus.Register(device).TEMPERATURE]
                moteusStateMsg.fault = feedback[index].values[moteus.Register(device).FAULT]
                moteusStateStamped.state.append(moteusStateMsg)
                self.recv_command[device]["position"] = feedback[index].values[moteus.Register(device).POSITION]
            self.publisher_.publish(moteusStateStamped)

    def drive_rezero(self):
        if self.rezero_on_startup:
            self.moteusDrive.set_state_rezero()
            self.get_logger().info('MoteusNode rezero')
        
    def drive_stop(self):
        self.moteusDrive.set_state_stop()
        
    def drive_terminate(self):
        self.get_logger().info('MoteusNode terminated')
        self.moteusDrive.set_state_terminated()
    
def main(args=None):
    try:
        rclpy.init(args=args)
        moteusNode = MoteusNode()
        rclpy.spin(moteusNode)
    except KeyboardInterrupt:
        moteusNode.drive_terminate()
    finally:
        # destroy the node explicitly
        moteusNode.destroy_node()
        rclpy.shutdown()
    
if __name__ == '__main__':
    main()