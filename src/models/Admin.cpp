#include "Admin.h"
using namespace QuizModel;

// Constructors
Admin::Admin() {};
Admin::Admin(const string &name_, const string &userid_, const string &password_) : User(name_, userid_, password_) {};

// Implement pure virtual functions from User
bool Admin::login(const string &userid, const string &password) {};
bool Admin::logout() {};
void Admin::info() {};

// Student Management
void Admin::addStudent() {};
void Admin::removeStudent(const string &studentId) {};
void Admin::viewAllStudents() const {};
void Admin::viewStudentResult(const string &studentId) const {};

// Quiz Management
void Admin::createQuiz() {};
void Admin::editQuiz(string quizId) {};
void Admin::deleteQuiz(string quizId) {};
void Admin::startQuiz() {};
void Admin::endQuiz() {};

// Question Management through Quiz
void Admin::addQuestionToQuiz(const string &quizId, const string &question) {};
void Admin::displayAllQuizzes() const {};

void Admin::viewQuizResults(string quizId) {};