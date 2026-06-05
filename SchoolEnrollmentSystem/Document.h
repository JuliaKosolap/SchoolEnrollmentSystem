#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

using namespace std;

class Document
{
private:
    int id;
    string type;
    string fileUrl;
    string uploadDate;

public:
    Document();

    Document(int id,
        string type,
        string fileUrl,
        string uploadDate);

    bool upload();
    bool validate();

    string getType() const;
};

#endif
