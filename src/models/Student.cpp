#include <iostream>
#include "Student.h"
using namespace std;
using namespace QuizModel;

// Constructors
Student::Student() {};
Student::Student(const string &name_, const string &userid_, const string &password_) : User(name_, userid_, password_) {};

// Implement pure virtual functions from User
bool Student::login(const string &userid_, const string &password_)
{
    if (verify(userid_, password_))
    {
        cout << "✅ Student login successfull" << endl;
        cout << "Welcome " << getName() << "!!!" << endl;

        return true;
    }
    else
    {
        cout << "❌ Login failed! Invalid credentials." << endl;
        return false;
    }
};

bool Student::logout()
{
    cout << "Student " << getName() << " logged out!!!" << endl;
    return true;
};

void Student::info()
{
    cout << "\n=== STUDENT PROFILE ===" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Student ID: " << getUserId() << endl;
    cout << "Status: Active" << endl;
}

// Quiz
void Student::viewAvailableQuizzes() const {};
void Student::attendQuiz(const string &quizId) {};
void Student::answerQuestion(const string &questionId, const string &answer) {};
void Student::submit() {};
void Student::viewUpcomingQuizzes() {};
void Student::viewQuizResult(const string &quizId) const {};
void Student::viewAllResults() const {};