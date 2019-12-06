# some_cmake_test

A small compilation of static analysis tools, unit test, fuzzing, documentation and logging tools linked to a CI server.

## How to build
### With CMake

Build using CMake with:
```
cd <my_package>
mkdir build
cd build
cmake -DBUILD_TESTING=ON ..
make
```

### With ROS 2 colcon

You'll need to have [ROS 2](https://index.ros.org/doc/ros2/) installed.
Then source ROS 2, we actually only need colcon which is ROS 2 independent, it's just easier to source the whole thing and since colcon is most likely only used with ROS 2, it doesn't really matter if we source ROS 2.

Source ROS 2 and build with tests with:
```
source /opt/ros/<my_ros_distro>/setup.bash
colcon build --cmake-args -DBUILD_TESTING=ON
```

## Static analysis (cppcheck, cpplint)

TODO

## Unit tests (Catch2)

[Catch2](https://github.com/catchorg/Catch2) is added as a git submodule in `test\external_tools` and is used for unit testing.

After building, run the tests with:
```
cd <my_package>/build/some_cmake_test/test
ctest --output-on-failure
```

## Fuzzing (?)

TODO

## Documentation (Doxygen)

Install [doxygen](http://www.doxygen.nl/) on your system with:
```
sudo apt install doxygen
```

Generate the documentation with:
```
cd <my_package>/documentation
doxygen doxygen.conf
```

Check the generated documentation by opening `html/index.html` in your browser.

## Logging (spdlog)

(spdlog)[https://github.com/gabime/spdlog] is the logger used for our system. It is added as a git submodule in `external_tools`.

## CI (Jenkins CI)

Check the [Jenkinsfile](Jenkinsfile) in this repository and the [Jenkins CI server](http://hopermf-desktop.local:8080/job/cmake_package_pipeline/) (only accessible from local network).

## Code coverage (gcovr)

Install gcovr on your system with:
```
sudo -H pip install gcovr
```

Generate the code coverage data as html with:
```
cd build
mkdir coverage
gcovr -r .. --filter '\.\./src/' --filter '\.\./include/' --html-details -o coverage/coverage.html 
```

Or generate the code coverage data as XML with:
```
cd build
mkdir coverage
gcovr -r .. --filter '\.\./src/' --filter '\.\./include/' --xml-pretty -o coverage/coverage.xml 
```
