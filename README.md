# some_cmake_test

A small compilation of static analysis tools, unit test, fuzzing, documentation and logging tools linked to a CI server.

## How to build

Build using CMake with:
```
cd <my_package>
mkdir build
cd build
cmake -DBUILD_TESTING=ON ..
make
```

## Static analysis (cppcheck)

Install [cppcheck](http://cppcheck.sourceforge.net/) and run with:
'''
cd <my_package>/build
cppcheck --enable=all --inconclusive --config-exclude=../external_tools/ --suppress=*:*external_tools\\* -I ../external_tools/spdlog/include -I ../include/ --suppress=missingIncludeSystem --xml --xml-version=2 ../src/ 2> cppcheck.xml
'''

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

[spdlog](https://github.com/gabime/spdlog) is the logger used for our system. It is added as a git submodule in `external_tools`.

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
