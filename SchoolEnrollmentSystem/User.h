#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
protected:
    int id;
    string fullName;
    string email;
    string phone;
    string password;

public:
    User();
    User(int id,
        string fullName,
        string email,
        string phone,
        string password);

    virtual ~User();

    bool login(string email, string password);
    void logout();

    string getFullName() const;
    string getEmail() const;

    virtual void showMenu() = 0;
};

#endif#pragma once
