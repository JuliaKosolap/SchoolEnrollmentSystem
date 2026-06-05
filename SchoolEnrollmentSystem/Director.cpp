#include "Director.h"
#include <iostream>

using namespace std;

Director::Director()
{
}

Director::Director(int id,
    string fullName,
    string email,
    string phone,
    string password)
    : User(id, fullName, email, phone, password)
{
}

void Director::showMenu()
{
    cout << "\n=== Меню директора ===" << endl;
    cout << "1. Переглянути результати розподілу" << endl;
    cout << "2. Затвердити список" << endl;
}

void Director::viewDistributionResults()
{
    cout << "Перегляд результатів розподілу..." << endl;
}

void Director::approveFinalList()
{
    cout << "Список затверджено." << endl;
}