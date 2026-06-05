#include "User.h"
#include <iostream>

using namespace std;

User::User()
{
}

User::User(int id,
    string fullName,
    string email,
    string phone,
    string password)
{
    this->id = id;
    this->fullName = fullName;
    this->email = email;
    this->phone = phone;
    this->password = password;
}

User::~User()
{
}

bool User::login(string email, string password)
{
    return this->email == email &&
        this->password == password;
}

void User::logout()
{
    cout << "Користувач вийшов із системи." << endl;
}

string User::getFullName() const
{
    return fullName;
}

string User::getEmail() const
{
    return email;
}