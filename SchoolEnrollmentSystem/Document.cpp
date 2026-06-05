#include "Document.h"

Document::Document()
{
}

Document::Document(int id,
    string type,
    string fileUrl,
    string uploadDate)
{
    this->id = id;
    this->type = type;
    this->fileUrl = fileUrl;
    this->uploadDate = uploadDate;
}

bool Document::upload()
{
    return true;
}

bool Document::validate()
{
    return true;
}

string Document::getType() const
{
    return type;
}