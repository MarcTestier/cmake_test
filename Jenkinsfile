pipeline {
	agent any
    
    environment {
        HOME_PATH = "/home/hopermf"
    }

    stages {
		stage('Clone') {
			steps {
                echo 'Cloning...'
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