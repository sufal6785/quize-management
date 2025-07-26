#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "Quiz.h"
#include "Question.h"
#include "Student.h"
#include "Result.h"
#include <vector>

namespace QuizModel
{
    class Admin : public User
    {
    private:
        vector<Quiz> managedQuizzes;     // Admin manages multiple quizzes
        vector<Student> managedStudents; // Admin manages students
        vector<Result> allResults;

        // UTILITY METHODS (Private helper methods)
        Quiz *findQuizById(const string &quizId);              // Find quiz by ID
        bool isQuizExists(const string &quizId) const;         // Check if quiz exists
        Student *findStudentById(const string &studentId);     // Find student by ID
        bool isStudentExists(const string &studentId) const;   // Check if student exists
        Result *findResultById(const string &resultId);
        bool isResultExist(const string &resultId);

        
        void displayError(const string &message) const;        // Display error messages
        bool validateQuizId(const string &quizId) const;       // Validate quiz ID format
        bool validateStudentId(const string &studentId) const; // Validate student ID format

    public:
        // Constructors
        Admin();
        Admin(const string &name, const string &userid, const string &password);

        // Implement pure virtual functions from User
        bool login(const string &userid, const string &password) override;
        bool logout() override;
        void info() override;

        // Student Management
        void addStudent();
        void removeStudent(const string &studentId);
        void viewAllStudents() const;
        void viewStudentResult(const string &studentId) const;

        // Quiz Management
        void createQuiz();
        void editQuiz(string quizId);
        void deleteQuiz(string quizId);
        void startQuiz();
        void endQuiz();

        // Question Management through Quiz
        void addQuestionToQuiz(const string &quizId, const string &question);
        void displayAllQuizzes() const;

        void viewQuizResults(string quizId);
    };
}

#endif