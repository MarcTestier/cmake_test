# some_cmake_test

Source ROS 2 and build with tests:
```
source /opt/ros/dashing/setup.bash
colcon build --cmake-args -DBUILD_TESTING=ON
```

Go run the tests:
```
cd <my_ws>/build/some_cmake_test/test
ctest
```
