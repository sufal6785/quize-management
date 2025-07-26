#ifndef QUESTION_H
#define QUESTION_H
#include <string>
#include <vector>
using namespace std;

namespace QuizModel
{
    class Question
    {
    public:
        // Enumeration
        enum Difficulty
        {
            EASY = 1,
            MEDIUM = 2,
            HARD = 3
        };

    private:
        string questionId;
        string questionText;
        vector<string> options;
        int correctAnswer;
        int points;
        Difficulty diffLevel;

    public:
        // Constructor
        Question();
        Question(const string &id, const string &text, const vector<string> &opts,
                 int correct, int pts = 1);
        Question(const string &id, const string &text, const vector<string> &opts,
                 int correct, int pts, Difficulty diff, const string &cat);

        // Set
        void setQuestionId(const string &questionId);
        void setQuestionText(const string &questionText);
        void setOptions(const vector<string> &options);
        void setCorrectAnswer(int correct);
        void setPoints(int points);
        void setDifficulty(Difficulty diff);

        // Get
        string getQuestionId() const;
        string getQuestionText() const;
        vector<string> getOptions() const;
        int getCorrectAnswer() const;
        int getPoints() const;
        Difficulty getDifficulty() const;

        // Question Management
        bool checkAnswer(int studentAnswer);
        void displayQuestion() const;
    };
}

#endif