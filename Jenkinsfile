pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    // Compilation step removed to cause an error
                }
            }
        }
        
        stage('Test') {
            steps {
                script {
                    sh './PES1UG22CS717-1' // Runs the compiled file (which won't exist)
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
