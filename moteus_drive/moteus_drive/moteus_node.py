#!/usr/bin/python3
from array import array
import threading
from time import sleep
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor
from moteus_drive.moteus_control.MoteusDrive import MoteusDrive
import moteus
from moteus_msgs.msg import MoteusState, MoteusStateStamped

class MoteusNode(Node):
    def __init__(self):
        super().__init__('moteus_motor')
        # declare parameters
        self.declare_param()
        
        # get parameters values
        self.frame_id = self.get_parameter("frame_id").value
        self.rezero_on_startup = self.get_parameter("rezero_on_startup").value
        self.devices = self.get_parameter("moteus_ids").value
        
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
        self.publisher_ = self.create_publisher(MoteusStateStamped, 'MoteusFeedback', 10)
        
        # create timer interval 0.5 second
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.callback_update)
        
    def declare_param(self):
        self.declare_parameter("frame_id", "moteus_drive", ParameterDescriptor(description="Frame ID"))
        self.declare_parameter("rezero_on_startup", False, ParameterDescriptor(description="Rezero on startup"))
        self.declare_parameter("moteus_ids",[1], ParameterDescriptor(description="Moteus IDs"))

    def callback_update(self):
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