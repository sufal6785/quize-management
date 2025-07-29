#include "Result.h"
using namespace std;
using namespace QuizModel;

// Constructor
Result::Result(const string &studentId, const string &quizId) {};
Result::Result(const string &studentId, const string &quizId, int correctAnswer) {};

// Setter
void Result::setTotalQuestions(int total) {};
void Result::setCorrectAnswers(int correct) {};
void Result::setIncorrectAnswers(int incorrect) {};
void Result::setSkippedQuestions(int skipped) {};
void Result::setTotalPoints(int points) {};

// Getter
string Result::getStudentId() const {};
string Result::getQuizId() const {};
string Result::getResultId() const {};
int Result::getTotalQuestions() const {};
int Result::getCorrectAnswers() const {};
int Result::getIncorrectAnswers() const {};
int Result::getSkippedQuestions() const {};
int Result::getTotalPoints() const {};

// Calculation
void Result::calculateResult() {};

// Display
void Result::displayResult() const {};