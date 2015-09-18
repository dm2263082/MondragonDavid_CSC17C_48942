#include <iostream>
#include "simplevector.h"

using namespace std;


/* CSC17C 48942 Assignment 2
// David Mondragon
// Due: 9/17/15
// Task: Modify simplevector.h by adding 2 functions,
//      then test to make sure they are working properly.
//
// The functions will be:
// 1) Add a push routine that will augment the array by 1 and double at
//      the top to hold the new value pushed.
// 2) Add a pull routine that takes one value off the top of the array
//      and decreases the size by 1.
*/

int main()
{
    cout << "Hello World!" << endl;
    SimpleVector<int> vect(10);

    cout << vect.size() << endl;

    vect.show();

    vect.push(3);

    for(int i=0; i<15; i++)
        vect.push(7);

    vect.show();

    return 0;
}

