pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    sh 'g++ -o PES1UG22CS717-1 main.cpp' 
                }
            }
        }
        
        stage('Test') {
            steps {
                script {
                    sh './PES1UG22CS717-1' 
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
            echo 'Pipeline failed' 
        }
    }
}
