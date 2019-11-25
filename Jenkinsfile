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
                sh 'cd some_cmake_test'
                sh 'mkdir build'
                sh 'cd build'
                sh 'cmake -DBUILD_TESTING=ON ..'
                sh 'make'
			}
		}
		stage('Unit test') {
			steps {
				echo 'Testing...'
			}
		}
		stage('Code coverage') {       
			steps {
			    echo 'Checking code coverage...'
			}        
		}
	}
}