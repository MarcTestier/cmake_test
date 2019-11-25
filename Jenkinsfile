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