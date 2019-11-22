cmake_minimum_required(VERSION 3.5)

project(some_catch_test LANGUAGES CXX VERSION 0.0.1)

file(GLOB_RECURSE unit_test_srcs "unit_test/*.cpp")
add_subdirectory(external_tools/Catch2)
add_executable(unit_test main.cpp ${unit_test_srcs})
target_link_libraries(unit_test Catch2::Catch2 MyNode)

set (CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/external_tools/Catch2/contrib")

include(CTest)
include(Catch)
catch_discover_tests(unit_test)
