#include "Question.h"
#include "Enum.h"
using namespace std;
using namespace QuizModel;

// Constructor
Question::Question() {};
Question::Question(const string &id, const string &text, const vector<string> &opts,
                   int correct, int pts = 1) {};
Question::Question(const string &id, const string &text, const vector<string> &opts,
                   int correct, int pts, Difficulty diff, const string &cat) {};

// Set
void Question::setQuestionId(const string &questionId) {};
void Question::setQuestionText(const string &questionText) {};
void Question::setOptions(const vector<string> &options) {};
void Question::setCorrectAnswer(int correct) {};
void Question::setPoints(int points) {};
void Question::setDifficulty(Difficulty diff) {};

// Get
string Question::getQuestionId() const {};
string Question::getQuestionText() const {};
vector<string> Question::getOptions() const {};
int Question::getCorrectAnswer() const {};
int Question::getPoints() const {};
Difficulty Question::getDifficulty() const {};

// Question Management
bool Question::checkAnswer(int studentAnswer) {};
void Question::displayQuestion() const {};