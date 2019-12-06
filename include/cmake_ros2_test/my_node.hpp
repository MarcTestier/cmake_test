/**
 * @file my_node.hpp
 * @author Marc-Antoine Testier (marc.testier@gmail.com)
 * @brief A simple class with a function to test
 * @version 0.1
 * @date 2019-12-05
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef MY_NODE_H
#define MY_NODE_H

#include <iostream>
#include <string>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

/**
 * @brief Some class on which tests and other tools are applied
 * 
 */
class MyNode {
    public:
        /**
         * @brief Construct a new MyNode object
         * 
         */
        MyNode();

        /**
         * @brief Fibonacci function to test
         * 
         * @param some_val 
         * @return int 
         */
        int doStuff(int some_val);
};


#endif  // MY_NODE_H