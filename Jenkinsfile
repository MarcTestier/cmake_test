node('master') {
    stage('Build') {
        echo 'Building...'
        deleteDir
        sh '''
        git clone --recurse-submodules -j4 https://github.com/MarcTestier/some_cmake_test
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
        cd test
        ctest
        '''
    }
}
