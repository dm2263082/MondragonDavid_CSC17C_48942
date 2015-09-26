#ifndef LINKVECTOR_H
#define LINKVECTOR_H

#include <string>

using namespace std;
class linkVector
{
public:
    linkVector(int);
    void append(int);
    string toString();
    virtual ~linkVector();

private:
    struct Node
    {
            int data;
            Node *next;
    };
    Node *head;
    Node *worker;
};

#endif // LINKVECTOR_H
