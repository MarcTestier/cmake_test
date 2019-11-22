# some_cmake_test

## With colcon
We'll source ROS 2 but we actually only need colcon which is ROS 2 independent, it's just easy to source the whole thing.

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

## With pure CMake

Should work with cmake, something like:
```
cd <my_package>
mkdir build
cd build
cmake -DBUILD_TESTING=ON ..
make
cd test
ctest
```
