#!/usr/bin/env python3

import sys
import threading
import rclpy
from rclpy.node import Node
from rt1_assignment2.srv import GetAvgVel
from std_msgs.msg import Float32
from rclpy.executors import MultiThreadedExecutor

class UserInterface(Node):
    def __init__(self):
        super().__init__('user_interface')
        self.thresh_pub = self.create_publisher(Float32, '/threshold', 10)
        self.get_avg_client = self.create_client(GetAvgVel, '/get_avg_vel')
        
        self.running = True
        self.menu_thread = threading.Thread(target=self.menu_loop)
        self.menu_thread.start()

    def menu_loop(self):
        while self.running and rclpy.ok():
            print("\n--- User Interface ---")
            print("t: Set Threshold")
            print("a: Get Average Velocity")
            print("q: Quit")
            print("Command: ", end='', flush=True)
            
            try:
                cmd = sys.stdin.readline().strip()
            except RuntimeError:
                break
                
            if cmd == 't':
                try:
                    val_str = input("Enter new threshold: ")
                    val = float(val_str)
                    
                    msg = Float32()
                    msg.data = val
                    
                    self.thresh_pub.publish(msg)
                    print("Threshold instantaneously published asynchronously!")
                        
                except ValueError:
                    print("Invalid number format")
                    
            elif cmd == 'a':
                req = GetAvgVel.Request()
                
                if not self.get_avg_client.wait_for_service(timeout_sec=5.0):
                    self.get_logger().warn('Service get_avg_vel not available')
                    self.get_logger().info(f'Available services: {self.get_service_names_and_types()}')
                    continue
                    
                future = self.get_avg_client.call_async(req)
                while not future.done():
                    import time
                    time.sleep(0.1)
                
                res = future.result()
                print(f"Avg Linear: {res.avg_linear}, Avg Angular: {res.avg_angular}")
                
            elif cmd == 'q':
                self.running = False
                print("Quitting...")
                # Signal shutdown to the executor
                try:
                    rclpy.shutdown()
                except Exception:
                    pass
                break


def main(args=None):
    rclpy.init(args=args)
    node = UserInterface()
    
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        pass
    finally:
        node.running = False
        # node.menu_thread.join()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
        # Explicitly exit with 0 to satisfy gnome-terminal --wait
        sys.exit(0)

if __name__ == '__main__':
    main()
