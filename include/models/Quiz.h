#ifndef QUIZ_H
#define QUIZ_H
#include "Question.h"
#include "Result.h"
#include <string>
#include <vector>
using namespace std;

namespace QuizModel
{
    class Quiz
    {
    private:
        string quizId;
        string title;
        string description;
        vector<Question> questions;
        int timeLimit;
        int maxAttempts;
        bool isActive;

    public:
        // Constructors
        Quiz();
        Quiz(const string &quizId, const string &title, const string &desc);

        //Setters
        void setQuizId(const string &quizId);
        void setTitle(const string &title);
        void setDesc(const string &desc);   
        void setTimeLimit(int &limit);
        void setMaxAttempts(int &attempts);

        //Getters
        string getQuizId() const;
        string getTitle() const;
        string getDesc() const;
        int getTimeLimit() const;
        int getMaxAttempts() const;
        vector<Question> getQuestions() const;

        //Question Management
        void addQuestion(const Question &question);
        void removeQuestion(const string &questionId);

        bool isQuizActive() const;
        void setActive(bool active);
        void displayQuiz() const;
    };
}

#endif