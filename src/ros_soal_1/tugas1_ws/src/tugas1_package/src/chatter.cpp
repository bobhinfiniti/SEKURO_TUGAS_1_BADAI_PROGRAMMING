#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class PublisherNode : public rclcpp::Node
{
public:
   PublisherNode() : Node("node_name")
   {

       // Publisher initialization
       publisher_ = this->create_publisher<std_msgs::msg::String>("test", 10);

       // Timer initialization
       timer_ = this->create_wall_timer(
           std::chrono::seconds(1),
           std::bind(&PublisherNode::timer_callback, this)
       );
   }

private:

   // Publisher declaration
   rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;

   // Timer declaration
   rclcpp::TimerBase::SharedPtr timer_;

   // Callback function for the timer
   void timer_callback() {
       auto message = std_msgs::msg::String();
       message.data = "Hello, ROS 2!";
       RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
       publisher_->publish(message);
   }

};

int main(int argc, char * argv[])
{
   rclcpp::init(argc, argv);
   rclcpp::spin(std::make_shared<PublisherNode>());
   rclcpp::shutdown();
   return 0;
}
