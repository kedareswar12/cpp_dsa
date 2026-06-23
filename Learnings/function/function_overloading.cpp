#include <iostream>
using namespace std;

/*
---------------------------------------------------------
                FUNCTION OVERLOADING IN C++
---------------------------------------------------------

Definition:
Function Overloading allows multiple functions to have
the same name but different parameter lists.

Function Overloading can be achieved by:
1. Changing the number of parameters.
2. Changing the type of parameters.

Note:
Changing only the return type is NOT considered
function overloading.

Example:
int sum(int a, int b);
double sum(int a, int b);   // Invalid
---------------------------------------------------------
*/

// Overloaded function based on number of parameters
int sum(int a, int b)
{
    return a + b;
}

// Overloaded function with three parameters
int sum(int a, int b, int c)
{
    return a + b + c;
}

// Overloaded function based on parameter type
double sum(double a, double b)
{
    return a + b;
}

int main()
{
    // Calls sum(int, int)
    cout << "Sum of two integers: "<< sum(3, 4) << endl;

    // Calls sum(double, double)
    cout << "Sum of two doubles: "<< sum(3.6, 4.6) << endl;

    // Calls sum(int, int, int)
    cout << "Sum of three integers: "<< sum(3, 3, 4) << endl;

    return 0;
}

/*
---------------------------------------------------------
Output:

Sum of two integers: 7
Sum of two doubles: 8.2
Sum of three integers: 10

---------------------------------------------------------
Function Selection:

sum(3, 4)
-> int sum(int, int)

sum(3.6, 4.6)
-> double sum(double, double)

sum(3, 3, 4)
-> int sum(int, int, int)

---------------------------------------------------------
*/