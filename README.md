# some_cmake_test

A small compilation of static analysis tools, unit test, fuzzing, documentation and logging tools linked to a CI server.

## Static analysis (cppcheck, cpplint)

TODO

## Unit tests (Catch2)
### With colcon
We'll source ROS 2 but we actually only need colcon which is ROS 2 independent, it's just easier to source the whole thing and since colcon is most likely only used with ROS 2, it doesn't really matter if we source ROS 2.

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

### With pure CMake

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

## Fuzzing (?)

TODO

## Documentation (Doxygen)

```
cd documentation
doxygen doxygen.conf
```

## Logging (spdlog)

TODO

## CI (Jenkins CI)

Check the [Jenkinsfile](Jenkinsfile) in this repository and the [Jenkins CI server](http://hopermf-desktop.local:8080/job/cmake_package_pipeline/) (only accessible from local network).

## Code coverage (gcovr)

```
sudo -H pip install gcovr
```
