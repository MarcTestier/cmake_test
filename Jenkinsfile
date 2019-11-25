pipeline {
	agent any
		stages {
		stage('Clone') {
			steps {
				echo 'I am executing stage 1'
			}
		}
		stage('Two') {
			steps {
				echo 'I am executing stage 2'
			}
		}
		stage('Three') {
			steps {
				echo "Running Stage Three"
			}
		}
		stage('Four') {       
			steps {
			    echo "Running another test job"
			}        
		}
	}
}