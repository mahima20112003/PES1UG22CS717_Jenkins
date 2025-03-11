pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    sh 'g++ -o YOUR_SRN-1 main.cpp' // Compiles C++ file
                }
            }
        }
        
        stage('Test') {
            steps {
                script {
                    sh './PES1UG22CS717-1' // Runs the compiled file
                }
            }
        }
        
        stage('Deploy') {
            steps {
                echo "Deploying the application..."
            }
        }
    }
    
    post {
        failure {
            echo 'Pipeline failed' // Post action in case of failure
        }
    }
}
