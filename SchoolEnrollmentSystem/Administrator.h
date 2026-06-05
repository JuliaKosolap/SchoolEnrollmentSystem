#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"

class Administrator : public User
{
public:
    Administrator();

    Administrator(int id,
        string fullName,
        string email,
        string phone,
        string password);

    void showMenu() override;

    void reviewApplications();
    void verifyDocuments();
    void approveApplication();
    void rejectApplication();
    void distributeStudents();
};

#endif
