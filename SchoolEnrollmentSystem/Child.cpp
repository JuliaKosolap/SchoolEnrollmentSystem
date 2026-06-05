#include "Child.h"

Child::Child()
{
}

Child::Child(int id,
    string fullName,
    string birthDate)
{
    this->id = id;
    this->fullName = fullName;
    this->birthDate = birthDate;
}

int Child::getId() const
{
    return id;
}

string Child::getFullName() const
{
    return fullName;
}

string Child::getBirthDate() const
{
    return birthDate;
}

int Child::getAge() const
{
    return 6;
}