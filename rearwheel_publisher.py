import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class SteeringPublisher(Node):

    def __init__(self):
        super().__init__('steering_publisher')
        self.publisher_ = self.create_publisher(Float32, 'steering_angle', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.angle = 0.0

    def timer_callback(self):
        msg = Float32()
        msg.data = self.angle
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: {msg.data}')
        # Update angle for demonstration purposes
        self.angle += 5.0
        if self.angle > 30.0:
            self.angle = -30.0

def main(args=None):
    rclpy.init(args=args)
    steering_publisher = SteeringPublisher()
    rclpy.spin(steering_publisher)
    steering_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()