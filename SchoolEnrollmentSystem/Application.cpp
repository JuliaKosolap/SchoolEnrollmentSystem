#include "Application.h"

Application::Application()
{
    status = ApplicationStatus::Draft;
}

Application::Application(int id,
    string createdAt,
    Child child)
{
    this->id = id;
    this->createdAt = createdAt;
    this->child = child;
    status = ApplicationStatus::Draft;
}

bool Application::submit()
{
    status = ApplicationStatus::Submitted;
    return true;
}

void Application::updateStatus(ApplicationStatus status)
{
    this->status = status;
}

void Application::addDocument(Document doc)
{
    documents.push_back(doc);
}

ApplicationStatus Application::getStatus() const
{
    return status;
}

Child Application::getChild() const
{
    return child;
}