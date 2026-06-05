#ifndef CHILD_H
#define CHILD_H

#include <string>

using namespace std;

class Child
{
private:
    int id;
    string fullName;
    string birthDate;

public:
    Child();

    Child(int id,
        string fullName,
        string birthDate);

    int getId() const;
    string getFullName() const;
    string getBirthDate() const;

    int getAge() const;
};

#endif
