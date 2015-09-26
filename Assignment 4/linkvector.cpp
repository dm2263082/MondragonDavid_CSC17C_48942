#include "linkvector.h"
#include <sstream>

linkVector::linkVector(int n)
{
    Node *clink=new Node;
    clink->data=n;
    clink->next=NULL;
    head=clink;
}

void linkVector::append(int n)
{
    Node *prev;
    if(head)
    {
        worker=head;
        do
        {
            prev=worker;
        }while (worker=worker->next);

        Node *clink=new Node;
        clink->data=n;
        clink->next=NULL;
        prev->next=clink;
    }
    else
    {
            Node *clink = new Node;
            clink->data=n;
            clink->next=NULL;
            head=clink;
    }
}

string linkVector::toString()
{
    string build="";
    if(head)
    {
        worker=head;
        do
        {
            build+=("Data element in the list ->");
            stringstream ss;
            ss << worker->data;
            string data;
            ss >> data;
            build += data;
            build += "\n";
        }while(worker=worker->next);
    }
    return build;
}

linkVector::~linkVector()
{
    if(head)
    {
        do
        {
            worker=head;
            head=head->next;
            delete worker;
        }while(head);
    }
}
