#!/usr/bin/env python3

import sys
import threading
import rclpy
from rclpy.node import Node
from rt1_assignment2.srv import SetThreshold, GetAvgVel

class UserInterface(Node):
    def __init__(self):
        super().__init__('user_interface')
        self.set_thresh_client = self.create_client(SetThreshold, 'set_threshold')
        self.get_avg_client = self.create_client(GetAvgVel, 'get_avg_vel')
        
        self.running = True
        self.menu_thread = threading.Thread(target=self.menu_loop)
        self.menu_thread.start()

    def menu_loop(self):
        while self.running and rclpy.ok():
            print("\n--- User Interface (Python) ---")
            print("t: Set Threshold")
            print("a: Get Average Velocity")
            print("q: Quit")
            print("Command: ", end='', flush=True)
            
            try:
                # This input will block. To exit gracefully on ctrl-c while blocking here is hard,
                # but 'q' handles the intentional exit.
                cmd = sys.stdin.readline().strip()
            except RuntimeError:
                break
                
            if cmd == 't':
                try:
                    val_str = input("Enter new threshold: ")
                    val = float(val_str)
                    
                    req = SetThreshold.Request()
                    req.input = val
                    
                    if not self.set_thresh_client.wait_for_service(timeout_sec=1.0):
                        self.get_logger().warn('Service set_threshold not available')
                        continue
                        
                    future = self.set_thresh_client.call_async(req)
                    # We can't easily wait on future here if we are not spinning in this thread.
                    # But the main thread IS spinning.
                    # We can block this thread until future is done roughly?
                    # No, future needs spin to process. Main thread is spinning.
                    
                    # Simple wait loop
                    while not future.done():
                        import time
                        time.sleep(0.1)
                        
                    result = future.result()
                    if result.success:
                        print("Threshold updated!")
                        
                except ValueError:
                    print("Invalid number format")
                    
            elif cmd == 'a':
                req = GetAvgVel.Request()
                
                if not self.get_avg_client.wait_for_service(timeout_sec=1.0):
                    self.get_logger().warn('Service get_avg_vel not available')
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
                # We need to stop the main thread spin
                # We can't easily signal shutdown from here except via rclpy.shutdown(), 
                # but that might cause errors in the main loop if not careful.
                # Actually main loop is rclpy.spin(node).
                # We will let main know.
                rclpy.shutdown()
                break

def main(args=None):
    rclpy.init(args=args)
    node = UserInterface()
    
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        pass
    finally:
        node.running = False
        # node.menu_thread.join() # Might hang if stuck on readline
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
