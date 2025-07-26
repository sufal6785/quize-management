#ifndef STUDENT_H
#define STUDENT_H
#include "User.h"
#include "Result.h"
namespace QuizModel
{
    class Student : public User
    {
    public:
        // Constructors
        Student();
        Student(const string &name, const string &userid, const string &password);

        // Implement pure virtual functions from User
        bool login(const string &userid, const string &password) override;
        bool logout() override;
        void info() override;

        //Quiz
        void viewAvailableQuizzes() const;
        void attendQuiz(const string &quizId);
        void answerQuestion(const string &questionId, const string &answer);
        void submit();
        void viewUpcomingQuizzes();
        void viewQuizResult(const string &quizId) const;
        void viewAllResults() const;
    };
}

#endif