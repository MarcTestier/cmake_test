#include "cmake_ros2_test/my_node.hpp"

MyNode::MyNode()
{
    spdlog::info("Welcome to MyNode!");
}

int MyNode::doStuff(int some_val)
{
    spdlog::info("Doing some stuff here!");
    if (some_val < 0) {
        spdlog::warn("Oh no! Some negative value: {}", some_val);
        return 0;
    } else if (some_val == 0 or some_val == 1) {
        spdlog::info("Yup, that's right, let's finish this function");
        return 1;
    } else {
        return some_val + doStuff(some_val-1);
    }
}