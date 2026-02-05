import rclpy
from rclpy.node import Node
from rt1_assignment2.srv import SetThreshold
import sys
import time

def main():
    rclpy.init()
    node = Node('test_service_client')
    client = node.create_client(SetThreshold, '/set_threshold')
    
    print("Waiting for service /set_threshold...")
    if not client.wait_for_service(timeout_sec=5.0):
        print("Service not available!")
        sys.exit(1)
        
    print("Service found! Sending request...")
    req = SetThreshold.Request()
    req.input = 1.0
    
    future = client.call_async(req)
    rclpy.spin_until_future_complete(node, future)
    
    if future.result() is not None:
        print("Service call successful!")
        sys.exit(0)
    else:
        print("Service call failed!")
        sys.exit(1)

if __name__ == '__main__':
    main()
