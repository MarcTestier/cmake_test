cmake_minimum_required(VERSION 3.5)
project(some_cmake_test)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(include ${INCLUDE_DIRS})

## Declare a cpp library
add_library(MyNode src/my_node.cpp)

install(TARGETS
    MyNode
    DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
