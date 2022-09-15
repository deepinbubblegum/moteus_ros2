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
    
    def set_feedback(self, feedback):
        self.raw_feedback = feedback
    
    def get_feedback(self):
        return self.raw_feedback
        
    async def run(self):
        transport = moteus.Fdcanusb()
        for id in self.ids:
            self.conn.append(moteus.Controller(id = id))
        while True:
            if self.state == "stop":
                self.make_stop = []  
                for id in range(len(self.ids)):
                    self.make_stop.append(self.conn[id].make_stop())
                await transport.cycle(self.make_stop)
                self.state = "start"
                
            while self.terminate is False:
                if self.state == "start":
                    self.make_position = []
                    for id in range(len(self.ids)):
                        self.make_position.append(self.conn[id].make_position(position=math.nan, velocity=10.0, maximum_torque=1.0, query=True)) 
                    # print(await transport.cycle(self.make_position))
                    self.set_feedback(await transport.cycle(self.make_position))
                await asyncio.sleep(0.01)
            await asyncio.sleep(0.01)
            
    def run_start(self):
        asyncio.run(self.run())
        
    def start(self):
        self.state = "start"
        self.get_logger().info('MoteusDriveState: %s' % self.state)
        
    def stop(self):
        self.state = "stop"
        self.get_logger().info('MoteusDriveState: %s' % self.state)
    
    def terminated(self):
        self.stop()
        # sleep(1)
        self.terminate = True
        self.get_logger().info('MoteusDriveState: %s' % self.state)