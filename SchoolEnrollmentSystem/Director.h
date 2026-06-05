#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "User.h"

class Director : public User
{
public:
    Director();

    Director(int id,
        string fullName,
        string email,
        string phone,
        string password);

    void showMenu() override;

    void viewDistributionResults();
    void approveFinalList();
};

#endif
