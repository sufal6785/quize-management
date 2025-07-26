#ifndef RESULT_H
#define RESULT_H
#include <string>
#include <vector>
using namespace std;

namespace QuizModel
{
    class Result
    {
    private:
        // automatically setted
        string resultId;
        string studentId;
        string quizId;

        // Quiz Performance
        int totalQuestions;
        int correctAnswer;
        int incorrectAnswer;
        int skippedQuestions;
        int totalPoints;

    public:
        // Constructor
        Result(const string &studentId, const string &quizId);
        Result(const string &studentId, const string &quizId, int correctAnswer);

        // Setter
        void setTotalQuestions(int total);
        void setCorrectAnswers(int correct);
        void setIncorrectAnswers(int incorrect);
        void setSkippedQuestions(int skipped);
        void setTotalPoints(int points);

        // Getter
        string getStudentId() const;
        string getQuizId() const;
        string getResultId() const;
        int getTotalQuestions() const;
        int getCorrectAnswers() const;
        int getIncorrectAnswers() const;
        int getSkippedQuestions() const;
        int getTotalPoints() const;

        // Calculation
        void calculateResult();

        // Display
        void displayResult() const;
    };
}

#endif