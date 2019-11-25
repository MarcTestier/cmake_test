node('master') {
    stage('Clone') {
        echo 'Cloning...'
        deleteDir()
        sh 'git clone --recurse-submodules -j4 https://github.com/MarcTestier/some_cmake_test'
    }
    stage('Build') {
        echo 'Building...'
        sh '''
        cd some_cmake_test
        mkdir build
        cd build
        cmake -DBUILD_TESTING=ON ..
        make
        '''
    }
    stage('Test') {
        echo 'Testing...'
        sh '''
        cd some_cmake_test/build/test
        ctest
        '''
    }
    stage('Code coverage') {
        echo 'Checking code coverage...'
        sh '''
        echo $PATH
        cd some_cmake_test/build
        gcovr -r .. --xml-pretty -o code_coverage.xml
        '''
    }
    
}
