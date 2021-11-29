#include <iostream>
#include "std_lib_facilities.h"

int main() 
{
    int x;
    cout << "Please enter a value: ";
    cin >> x;

    cout << "The value " << x << " is an ";
    if (x % 2 == 0)
        cout << "even number.";
    else
        cout << "odd number.";

    return 0;
}