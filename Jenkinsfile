pipeline {
	agent any
    
    environment {
        HOME_PATH = "/home/hopermf"
    }

    stages {
		stage('Clone') {
			steps {
                echo 'Cloning...'
                sh 'git submodule update --init --recursive'
			}
		}
		stage('Build') {
			steps {
				echo 'Building...'
                sh '''\
                pwd
                mkdir build
                cd build
                pwd
                cmake -DBUILD_TESTING=ON ..
                make
                '''
			}
		}
		stage('Unit test') {
			steps {
				echo 'Testing...'
                sh '''\
                cd build/test
                ctest
                '''
			}
		}
		stage('Code coverage') {       
			steps {
			    echo 'Checking code coverage...'
                sh '''\
                cd build
                sudo $HOME_PATH/.local/bin/gcovr -r .. --xml-pretty -o code_coverage.xml
                '''
			}        
		}
	}
}
