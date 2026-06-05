#ifndef APPLICATIONCONTROLLER_H
#define APPLICATIONCONTROLLER_H

#include <vector>

#include "Application.h"
#include "SchoolClass.h"

using namespace std;

class ApplicationController
{
private:
    vector<Application> applications;

public:
    ApplicationController();

    void createApplication(Application app);

    void changeStatus(int index,
        ApplicationStatus status);

    void showApplications();

    bool assignStudentToClass(int appIndex,
        SchoolClass& schoolClass);

    vector<Application>& getApplications();
};

#endif
