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
                sh 'pwd'
                sh 'mkdir build'
                sh 'cd build'
                sh 'pwd'
                sh 'cmake -DBUILD_TESTING=ON ..'
                sh 'make'
			}
		}
		stage('Unit test') {
			steps {
				echo 'Testing...'
                sh 'cd build/test'
                sh 'ctest'
			}
		}
		stage('Code coverage') {       
			steps {
			    echo 'Checking code coverage...'
			}        
		}
	}
}
