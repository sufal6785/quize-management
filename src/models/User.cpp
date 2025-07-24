#include "User.h"
#include <iostream>
using namespace std;
using namespace QuizModel;

User::User(const string &name_, const string &userid_, const string &password_)
    : name(name_), userid(userid_), password(password_)
{
}

User::~User() = default;

void User::setName(const string &name_)
{
    this->name = name_;
}

void User::setUserId(const string &userid_)
{
    this->userid = userid_;
}

void User::setPassword(const string &password_)
{
    this->password = password_;
}

string User::getName() const
{
    return this->name;
}

string User::getUserId() const
{
    return this->userid;
}

bool User::verify(const string &userid, const string &password)
{
    return (this->userid == userid && this->password == password);
}