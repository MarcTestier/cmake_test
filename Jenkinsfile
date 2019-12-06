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
                ctest --output-on-failure
                '''
			}
		}
		stage('Code coverage') {       
			steps {
			    echo 'Checking code coverage...'
                sh '''\
                cd build
				mkdir coverage
				gcovr -r .. --filter '\\.\\./src/' --filter '\\.\\./include/' --xml-pretty -o coverage/coverage.xml 
                '''
                cobertura coberturaReportFile: 'build/coverage/coverage.xml'
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
