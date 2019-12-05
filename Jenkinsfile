pipeline {
	agent any

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
				gcovr -r .. --exclude-directories 'test' --xml-pretty -o coverage.xml 
                '''
                cobertura coberturaReportFile: 'build/coverage.xml'
			}        
		}
		stage('Documentation') {       
			steps {
			    echo 'Generating documentation...'
                sh '''\
                cd documentation
				doxygen doxygen.conf
                '''
			}        
		}
	}
}
