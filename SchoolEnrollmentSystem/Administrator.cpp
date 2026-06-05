#include "Administrator.h"
#include <iostream>

using namespace std;

Administrator::Administrator()
{
}

Administrator::Administrator(int id,
    string fullName,
    string email,
    string phone,
    string password)
    : User(id, fullName, email, phone, password)
{
}

void Administrator::showMenu()
{
    cout << "\n=== Меню адміністратора ===" << endl;
    cout << "1. Переглянути заявки" << endl;
    cout << "2. Перевірити документи" << endl;
    cout << "3. Схвалити заявку" << endl;
    cout << "4. Відхилити заявку" << endl;
    cout << "5. Розподілити учнів" << endl;
}

void Administrator::reviewApplications()
{
    cout << "Перегляд заявок..." << endl;
}

void Administrator::verifyDocuments()
{
    cout << "Перевірка документів..." << endl;
}

void Administrator::approveApplication()
{
    cout << "Заявку схвалено." << endl;
}

void Administrator::rejectApplication()
{
    cout << "Заявку відхилено." << endl;
}

void Administrator::distributeStudents()
{
    cout << "Виконується розподіл учнів..." << endl;
}