pipeline {
    agent any
    stages {
        stage('Clone') {
            echo 'Cloning...'
            deleteDir()
            sh 'git clone --recurse-submodules -j4 https://github.com/MarcTestier/some_cmake_test'
        }
        stage('Build') {
            echo 'Building...'
            sh '''\
            cd some_cmake_test
            mkdir build
            cd build
            cmake -DBUILD_TESTING=ON ..
            make
            '''
        }
        stage('Test') {
            echo 'Testing...'
            sh '''\
            cd some_cmake_test/build/test
            ctest
            '''
        }
        stage('Code coverage') {
            environment {
                HOME_PATH = "/home/hopermf"
            }

            echo "Checking code coverage..."
            sh "cd some_cmake_test/build"
            sh "$HOME_PATH/.local/bin/gcovr -r .. --xml-pretty -o code_coverage.xml"
        }
    }
}
