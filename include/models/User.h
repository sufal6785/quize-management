#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

namespace QuizModel
{
    class User
    {
    protected:
        string name;
        string userid;

    private:
        string password;

    public:
        User() {}

        User(const string &name_, const string &userid_, const string &password_);

        virtual ~User();

        // set
        void setName(const string &name);
        void setUserId(const string &userid);
        void setPassword(const string &password);

        // get
        string getName() const;
        string getUserId() const;

        // pure virtual function
        virtual bool login(const string &userid, const string &password) = 0;
        virtual bool logout() = 0;
        virtual void info() = 0;

    protected:
        // verify password
        bool verify(const string &userid, const string &password);
    };
}

#endif