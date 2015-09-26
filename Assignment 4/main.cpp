#include <iostream>
#include <cstdlib>
#include "linkvector.h"

using namespace std;

/* David Mondragon
 * CSC_17C
 * Due: 9/25/2015
 * Goal:
 * Create a simple vector class utilizing a singly link-list class that has push,
 * etc...  behaviors. Compare to the array implementation.
 */

int main()
{
    linkVector list(0);

    int clinks=100;
    for(int i=1;i<=clinks;i++)
    {
        list.append(i);
    }

    cout << list.toString()<<endl;
    cout << "Hello World!" << endl;
    return 0;
}

