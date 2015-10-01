#ifndef LINKVECTOR_H
#define LINKVECTOR_H

#include <string>
#include <sstream>
/*Copy Constructor and Assignment Operator
 * Extract
 * InsertAfter and InsertBefore
 * First and Last functions
 */
using namespace std;

template <class T>
class linkVector
{
public:
    linkVector(T);

    T first();
    T last();
    void copy(linkVector);
    void extract(int);
    void insertAfter(int, T);
    void insertBefore( int, T);
    void prepend(T);

    void append(T);



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

template <class T>
linkVector<T>::linkVector(T n)
{
    Node *clink=new Node;
    clink->data=n;
    clink->next=NULL;
    head=clink;
}

template <class T>
T linkVector<T>::first()
{
    return head->data;
}

template <class T>
T linkVector<T>::last()
{
    Node *last;
    worker=head;
    do
    {
        last=worker;
    }while((worker=worker->next));

    return last->data;
}

template <class T>
void linkVector<T>::copy(linkVector<T> vectorCopy)
{
    this->worker = this->head;

    Node *side = new Node;
    side = vectorCopy.head;
    side->data = this->head->data;
    side->next = NULL;

    while((this->worker=this->worker->next))
    {
        Node *sideLink = new Node;
        sideLink->data = this->worker->data;
        sideLink->next = NULL;
        side->next = sideLink;
        side = side->next;
    }


}

template <class T>
void linkVector<T>::extract(int count)
{
    Node *prev;
    worker=head;
    int i=0;
    do
    {
        prev=worker;
        i++;
    }while((worker=worker->next) && (i<count));

    prev->next = worker->next;

    delete worker;


}

template <class T>
void linkVector<T>::insertAfter(int count, T item)
{
    Node *after;
    worker=head;
    int i=0;
    do
    {
        after=worker;
        i++;
    }while((worker=worker->next) && (i<count));

    Node *insert=new Node;
    insert->data = item;

    after->next = insert;
    insert->next = worker->next;
}

template <class T>
void linkVector<T>::insertBefore( int count, T item)
{
    Node *before;
    worker=head;
    int i=0;
    do
    {
        before=worker;
        i++;
    }while((worker=worker->next) && (i<count-1));

    Node *prev;
    prev = before;
    before = before->next;

    Node *insert=new Node;
    insert->data = item;

    prev->next=insert;
    insert->next = before;
}

template <class T>
void linkVector<T>::prepend(T item)
{
    worker=head;
    Node *clink=new Node;
    clink->data = item;
    clink->next=head;
    head=clink;
}

template <class T>
void linkVector<T>::append(T n)
{
    Node *prev;
    if(head)
    {
        worker=head;
        do
        {
            prev=worker;
        }while((worker=worker->next));

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

template <class T>
string linkVector<T>::toString()
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
        }while((worker=worker->next));
    }
    return build;
}

template <class T>
linkVector<T>::~linkVector()
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



#endif // LINKVECTOR_H
