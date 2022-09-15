import asyncio
import math
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
                
            if self.rezero:
                self.make_rezero = []  
                for id in range(len(self.ids)):
                    self.make_rezero.append(self.conn[id].make_rezero())
                await transport.cycle(self.make_rezero)
                self.rezero = False
                
            while self.terminate is False:
                if self.state == "start":
                    self.make_position = []
                    for id in range(len(self.ids)):
                        self.make_position.append(self.conn[id].make_position(position=math.nan, velocity=10.0, maximum_torque=1.0, query=True)) 
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
        
    def rezero(self):
        self.rezero = True
        self.get_logger().info('MoteusDriveRezero: %s' % self.rezero)
    
    def terminated(self):
        self.stop()
        self.terminate = True
        self.get_logger().info('MoteusDriveState: %s' % self.state)