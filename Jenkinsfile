node('linux') {
    stage('Build') {
        echo 'Building...'
        sh '''
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
