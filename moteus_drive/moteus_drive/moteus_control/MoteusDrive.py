import asyncio
import math
from time import sleep
import moteus
from rclpy.node import Node

class MoteusDrive(Node):
    def __init__(self, IDs):
        super().__init__('MoteusDriveCycle')
        self.ids = IDs
        self.conn = []
        self.state = "stop"
        self.terminate = False
        self.get_logger().info('MoteusDrive: Initialized')
        self.get_logger().info('MoteusDriveState: %s' % self.state)
        self.raw_feedback = None
        self.rezero = False
        self.servo_command = None
        self.feedback_position_device = None
    
    async def run(self):
        transport = moteus.Fdcanusb()
        for idx, device_id in enumerate(self.ids):
            self.conn.append(moteus.Controller(id = device_id))
        while True:            
            if self.state == "stop":
                self.make_stop = []  
                for idx, device_id in enumerate(self.ids):
                    self.make_stop.append(self.conn[idx].make_stop())
                await transport.cycle(self.make_stop)
                
            if self.rezero:
                self.make_rezero = []  
                for idx, device_id in enumerate(self.ids):
                    self.make_rezero.append(self.conn[idx].make_rezero())
                await transport.cycle(self.make_rezero)
                self.rezero = False
                
            while self.terminate is False and self.state == "start" and self.servo_command is not None:
                self.make_position = []
                for idx, device_id in enumerate(self.ids):
                    self.make_position.append(
                        self.conn[idx].make_position(
                            position=math.nan, 
                            velocity=self.servo_command[device_id]["velocity"], 
                            maximum_torque=self.servo_command[device_id]["maximum_torque"], 
                            query=True
                        )
                    ) 
                self.set_feedback(await transport.cycle(self.make_position))
                await asyncio.sleep(0.01)
            await asyncio.sleep(0.01)
            
            if self.state == "brake" and self.servo_command is not None:
                self.make_brake = []
                for idx, device_id in enumerate(self.ids):
                    self.make_brake.append(
                        self.conn[idx].make_position(
                            position = math.nan, 
                            velocity = 0.0, 
                            maximum_torque = self.servo_command[device_id]["maximum_torque"],
                            stop_position = self.servo_command[device_id]["position"] + self.servo_command[device_id]["velocity"],
                            query=True
                        )
                    ) 
                self.set_feedback(await transport.cycle(self.make_brake))
                # self.state = "stop"
                # self.servo_command = None
                self.get_logger().info('MoteusDriveState: %s' % self.state)
                await asyncio.sleep(0.01)
                self.state == "braked"
            
    def set_feedback(self, feedback):
        self.raw_feedback = feedback
    
    def get_feedback(self):
        return self.raw_feedback
    
    def run_start(self):
        asyncio.run(self.run())
        
    def set_state_start(self):
        self.state = "start"
        self.get_logger().info('MoteusDriveState: %s' % self.state)
        
    def set_state_stop(self):
        self.state = "stop"
        self.get_logger().info('MoteusDriveState: %s' % self.state)
        
    def set_state_rezero(self):
        self.rezero = True
        self.get_logger().info('MoteusDriveRezero: %s' % self.rezero)
    
    def set_state_terminated(self):
        self.set_state_stop()
        self.terminate = True
        self.get_logger().info('MoteusDriveState: %s' % self.state)
        
    def set_state_brake(self):
        # self.state = "brake"
        self.state = "stop"
        self.get_logger().info('MoteusDriveState: %s' % self.state)
    
    def set_state_command(self, command):
        self.servo_command = command
        if self.state != "start":
            self.state = "start"