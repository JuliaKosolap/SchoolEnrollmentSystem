#include "SchoolClass.h"
#include <iostream>

using namespace std;

SchoolClass::SchoolClass()
{
    capacity = 0;
}

SchoolClass::SchoolClass(int id,
    string name,
    int capacity)
{
    this->id = id;
    this->name = name;
    this->capacity = capacity;
}

bool SchoolClass::hasAvailableSeats()
{
    return students.size() < capacity;
}

bool SchoolClass::addStudent(Child child)
{
    if (hasAvailableSeats())
    {
        students.push_back(child);
        return true;
    }

    return false;
}

void SchoolClass::showStudents()
{
    cout << "\nУчні класу " << name << ":" << endl;

    for (auto& student : students)
    {
        cout << student.getFullName() << endl;
    }
}