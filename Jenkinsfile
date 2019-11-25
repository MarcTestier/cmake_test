pipeline {
	agent any
    
    environment {
        HOME_PATH = "/home/hopermf"
    }

    stages {
		stage('Clone') {
			steps {
				echo 'I am executing stage 1'
			}
		}
		stage('Build') {
			steps {
				echo 'I am executing stage 2'
			}
		}
		stage('Test') {
			steps {
				echo "Running Stage Three"
			}
		}
		stage('Code coverage') {       
			steps {
			    echo "Running another test job"
			}        
		}
	}
}