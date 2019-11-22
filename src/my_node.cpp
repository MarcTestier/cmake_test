#include "cmake_ros2_test/my_node.hpp"

MyNode::MyNode()
{
    std::cout << "Bonjour" << std::endl;
}

int MyNode::doStuff(int some_val)
{
    if (some_val < 0) {
        return some_val;
    } else if (some_val == 0 or some_val == 1) {
        return 1;
    } else {
        return some_val + doStuff(some_val-1);
    }
}