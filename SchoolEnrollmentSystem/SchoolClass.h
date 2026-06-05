#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include <string>
#include <vector>

#include "Child.h"

using namespace std;

class SchoolClass
{
private:
    int id;
    string name;
    int capacity;

    vector<Child> students;

public:
    SchoolClass();

    SchoolClass(int id,
        string name,
        int capacity);

    bool hasAvailableSeats();

    bool addStudent(Child child);

    void showStudents();
};

#endif
