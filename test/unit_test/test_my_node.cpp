#include "cmake_ros2_test/my_node.hpp"
#include <catch2/catch.hpp>

TEST_CASE( "My own tests", "[my-own-tests]" ) {
    MyNode my_node = MyNode();
    REQUIRE( my_node.doStuff(1) == 1 );
    REQUIRE( my_node.doStuff(2) == 3 );
    REQUIRE( my_node.doStuff(3) == 6 );
    REQUIRE( my_node.doStuff(10) == 55 );
}
