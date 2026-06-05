#ifndef PARENT_H
#define PARENT_H

#include "User.h"

class Parent : public User
{
private:
    string address;

public:
    Parent();

    Parent(int id,
        string fullName,
        string email,
        string phone,
        string password,
        string address);

    void showMenu() override;

    void createApplication();
    void viewApplicationStatus(int appId);
};

#endif
