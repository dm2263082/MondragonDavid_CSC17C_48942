#include <iostream>
#include <cstdlib>
#include "linkvector.h"

using namespace std;

/* David Mondragon
 * CSC_17C
 * Assignment 5
 * Due: 9/30/2015
 * Goal:
 * Pt 1: Add to your linked list:
 * First and Last Functions
 * Prepend
 * Append
 * Copy Constructor and Assignment Operator
 * Extract
 * InsertAfter and InsertBefore
 *
 * Pt 2: Template it and make it work for objects
 */

int main()
{
    linkVector<int> list(0);

    int clinks=10;
    for(int i=1;i<=clinks;i++)
    {
        list.append(i);
    }

    cout << list.toString()<<endl;

    cout << "The very first element is: " << list.first() << endl;
    cout << "The last element is: " << list.last() << endl;

    cout << "Prepending the number 80. " << endl;
    list.prepend(80);
    list.toString();

    cout << "Testing insertAfter with 30" << endl;
    list.insertAfter(5,30);
    list.toString();

    cout << "Testing insertBefore with 20" << endl;
    list.insertBefore(5,20);
    list.toString();

    cout << "Extracting item at 10" << endl;
    list.extract(10);

    cout << list.toString()<<endl;

    cout << "Making a copy" << endl;
    linkVector<int> vc(0);
    list.copy(vc);  // Copy non functional yet.
    vc.toString();

    cout << "Hello World!" << endl;
    return 0;
}
