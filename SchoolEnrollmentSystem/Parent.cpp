#include "Parent.h"
#include <iostream>

using namespace std;

Parent::Parent()
{
}

Parent::Parent(int id,
    string fullName,
    string email,
    string phone,
    string password,
    string address)
    : User(id, fullName, email, phone, password)
{
    this->address = address;
}

void Parent::showMenu()
{
    cout << "\n=== Меню батьків ===" << endl;
    cout << "1. Створити заявку" << endl;
    cout << "2. Переглянути статус заявки" << endl;
    cout << "0. Вихід" << endl;
}

void Parent::createApplication()
{
    cout << "Створення заявки..." << endl;
}

void Parent::viewApplicationStatus(int appId)
{
    cout << "Перегляд статусу заявки №"
        << appId << endl;
}