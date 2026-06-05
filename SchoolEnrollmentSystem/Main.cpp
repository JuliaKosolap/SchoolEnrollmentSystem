#include <iostream>
#include <windows.h>

#include "Parent.h"
#include "Administrator.h"
#include "Director.h"

#include "Child.h"
#include "Document.h"
#include "Application.h"
#include "ApplicationController.h"
#include "SchoolClass.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    ApplicationController controller;

    SchoolClass class1(1, "1-А", 30);

    Parent parent(
        1,
        "Олена Петренко",
        "parent@gmail.com",
        "+380501112233",
        "1234",
        "м. Київ"
    );

    Administrator administrator(
        2,
        "Ірина Коваленко",
        "admin@school.ua",
        "+380671112233",
        "admin"
    );

    Director director(
        3,
        "Марченко О.І.",
        "director@school.ua",
        "+380931112233",
        "director"
    );

    int choice;
    User* currentUser = nullptr;

    do
    {
        cout << "\n=================================" << endl;
        cout << "СИСТЕМА ЗАПИСУ ДО ШКОЛИ" << endl;
        cout << "=================================" << endl;

        cout << "1. Батько" << endl;
        cout << "2. Адміністратор" << endl;
        cout << "3. Директор" << endl;
        cout << "0. Вихід" << endl;

        cout << "\nОберіть роль: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            currentUser = &parent;
            currentUser->showMenu();

            int parentChoice;

            cout << "\nВаш вибір: ";
            cin >> parentChoice;

            switch (parentChoice)
            {
            case 1:
            {
                Child child(
                    1,
                    "Іван Петренко",
                    "2018-05-10"
                );

                Application app(
                    controller.getApplications().size() + 1,
                    "2025-06-05",
                    child
                );

                Document document(
                    1,
                    "Свідоцтво про народження",
                    "birth.pdf",
                    "2025-06-05"
                );

                app.addDocument(document);
                app.submit();

                controller.createApplication(app);

                cout << "\nЗаявку успішно подано." << endl;

                break;
            }

            case 2:
            {
                controller.showApplications();
                break;
            }

            default:
            {
                cout << "\nНевірний вибір." << endl;
            }
            }

            break;
        }

        case 2:
        {
            currentUser = &administrator;
            currentUser->showMenu();

            int adminChoice;

            cout << "\nВаш вибір: ";
            cin >> adminChoice;

            switch (adminChoice)
            {
            case 1:
            {
                controller.showApplications();
                break;
            }

            case 2:
            {
                if (!controller.getApplications().empty())
                {
                    cout << "\nДокументи перевірено успішно." << endl;
                }
                else
                {
                    cout << "\nЗаявок немає." << endl;
                }

                break;
            }

            case 3:
            {
                if (!controller.getApplications().empty())
                {
                    controller.changeStatus(
                        0,
                        ApplicationStatus::Approved
                    );

                    cout << "\nЗаявку схвалено." << endl;
                }
                else
                {
                    cout << "\nЗаявок немає." << endl;
                }

                break;
            }

            case 4:
            {
                if (!controller.getApplications().empty())
                {
                    controller.changeStatus(
                        0,
                        ApplicationStatus::Rejected
                    );

                    cout << "\nЗаявку відхилено." << endl;
                }
                else
                {
                    cout << "\nЗаявок немає." << endl;
                }

                break;
            }

            case 5:
            {
                if (!controller.getApplications().empty())
                {
                    if (controller.assignStudentToClass(
                        0,
                        class1))
                    {
                        cout << "\nУчня розподілено до класу." << endl;
                    }
                    else
                    {
                        cout << "\nУ класі немає вільних місць." << endl;
                    }
                }
                else
                {
                    cout << "\nНемає заявок для розподілу." << endl;
                }

                break;
            }

            default:
            {
                cout << "\nНевірний вибір." << endl;
            }
            }

            break;
        }

        case 3:
        {
            currentUser = &director;
            currentUser->showMenu();

            int directorChoice;

            cout << "\nВаш вибір: ";
            cin >> directorChoice;

            switch (directorChoice)
            {
            case 1:
            {
                class1.showStudents();
                break;
            }

            case 2:
            {
                cout << "\nОстаточний список затверджено директором." << endl;
                break;
            }

            default:
            {
                cout << "\nНевірний вибір." << endl;
            }
            }

            break;
        }

        case 0:
        {
            cout << "\nРоботу завершено." << endl;
            break;
        }

        default:
        {
            cout << "\nНевірний вибір." << endl;
        }
        }

    } while (choice != 0);

    return 0;
}