#include "ApplicationController.h"
#include <iostream>

using namespace std;

ApplicationController::ApplicationController()
{
}

void ApplicationController::createApplication(Application app)
{
    applications.push_back(app);
}

void ApplicationController::changeStatus(int index,
    ApplicationStatus status)
{
    if (index >= 0 &&
        index < applications.size())
    {
        applications[index].updateStatus(status);
    }
}

void ApplicationController::showApplications()
{
    cout << "\nСписок заявок:" << endl;

    for (int i = 0; i < applications.size(); i++)
    {
        cout << "Заявка №"
            << i + 1
            << endl;
    }
}

bool ApplicationController::assignStudentToClass(
    int appIndex,
    SchoolClass& schoolClass)
{
    if (appIndex >= 0 &&
        appIndex < applications.size())
    {
        return schoolClass.addStudent(
            applications[appIndex].getChild());
    }

    return false;
}

vector<Application>& ApplicationController::getApplications()
{
    return applications;
}