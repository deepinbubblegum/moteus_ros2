#!/usr/bin/python3
from array import array
import threading
from time import sleep
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor
from moteus_motor.moteus_lib.MoteusDrive import MoteusDrive
import moteus
from moteus_msgs.msg import MoteusState, MoteusStateStamped

class MoteusNode(Node):
    def __init__(self):
        super().__init__('MoteusNode')
        # declare parameters
        self.declare_param()
        
        # get devices id list
        self.devices = self.get_parameter("moteus_ids").value
        
        # initialize moteus drive cycle
        self.moteusDrive = MoteusDrive(self.devices)
        
        # create thread for moteus drive cycle
        thread = threading.Thread(target=self.moteusDrive.run_start, args=())
        thread.daemon = True
        thread.start()
        self.get_logger().info('MoteusNode started')
        
        # create publisher for moteus state
        self.publisher_ = self.create_publisher(MoteusStateStamped, 'MoteusFeedback', 10)
        
        # create timer interval 0.5 second
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.callback_update)
        
    def declare_param(self):
        self.declare_parameter(
            "moteus_ids",
            [1, 2],
            ParameterDescriptor(description="Moteus IDs")
        )

    def callback_update(self):
        feedback = self.moteusDrive.get_feedback()
        if feedback is not None:
            moteusStateStamped = MoteusStateStamped()
            moteusStateStamped.header.frame_id = "moteus"
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

    def drive_stop(self):
        self.moteusDrive.stop()
        
    def drive_terminate(self):
        self.get_logger().info('MoteusNode terminated')
        self.moteusDrive.terminated()
        sleep(1)
    
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