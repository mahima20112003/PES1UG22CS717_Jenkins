pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    sh 'g++ -o PES1UG22CS717-1 main.cpp' // Compilation succeeds
                }
            }
        }
        
        stage('Test') {
            steps {
                script {
                    sh './non_existent_binary' // This will fail because the file doesn't exist
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
            echo 'Pipeline failed' // This runs if any stage fails
        }
    }
}
