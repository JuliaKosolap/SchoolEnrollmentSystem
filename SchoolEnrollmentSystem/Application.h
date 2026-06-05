#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>

#include "Child.h"
#include "Document.h"
#include "ApplicationStatus.h"

using namespace std;

class Application
{
private:
    int id;
    string createdAt;
    ApplicationStatus status;

    Child child;
    vector<Document> documents;

public:
    Application();

    Application(int id,
        string createdAt,
        Child child);

    bool submit();

    void updateStatus(ApplicationStatus status);

    void addDocument(Document doc);

    ApplicationStatus getStatus() const;

    Child getChild() const;
};

#endif
