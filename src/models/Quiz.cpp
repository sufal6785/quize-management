#include "Quiz.h"
using namespace std;
using namespace QuizModel;

Quiz::Quiz() {};
Quiz::Quiz(const string &quizId_, const string &title_, const string &desc_):quizId(quizId_),title(title_),description(desc_) {};

// Setters
void Quiz::setQuizId(const string &quizId) {};
void Quiz::setTitle(const string &title) {};
void Quiz::setDesc(const string &desc) {};
void Quiz::setTimeLimit(int &limit) {};
void Quiz::setMaxAttempts(int &attempts) {};

// Getters
string Quiz::getQuizId() const {};
string Quiz::getTitle() const {};
string Quiz::getDesc() const {};
int Quiz::getTimeLimit() const {};
int Quiz::getMaxAttempts() const {};
vector<Question> Quiz::getQuestions() const {};

// Question Management
void Quiz::addQuestion(const Question &question) {};
void Quiz::removeQuestion(const string &questionId) {};

bool Quiz::isQuizActive() const {};
void Quiz::setActive(bool active) {};
void Quiz::displayQuiz() const {};