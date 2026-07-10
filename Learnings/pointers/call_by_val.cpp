/*
==========================================================
                SWAPPING IN C++
==========================================================

There are 3 ways to pass arguments to a function:

1. Call by Value
2. Call by Reference
3. Call by Pointer

----------------------------------------------------------
1. CALL BY VALUE
----------------------------------------------------------

- A copy of the variables is passed to the function.
- Changes are made only to the copies.
- Original variables remain unchanged.

Example:

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

Output:
10 20

Reason:
The swap occurs on copied variables, not on the originals.

==========================================================
2. CALL BY REFERENCE
==========================================================

- References act as aliases to the original variables.
- No copies are created.
- Changes directly affect the original variables.

Example:

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

Output:
20 10

==========================================================
3. CALL BY POINTER
==========================================================

- Addresses of variables are passed.
- Pointers store those addresses.
- Dereferencing (*) is used to access the actual values.

==========================================================
IMPORTANT OPERATORS
==========================================================

&  -> Address Of Operator
*  -> Dereference Operator

Example:

int x = 10;

&x     -> Address of x
*x     -> Value at address stored in pointer

==========================================================
MEMORY VISUALIZATION
==========================================================

x = 10            Address = 1000
y = 20            Address = 2000

ptr1 = &x         Stores 1000
ptr2 = &y         Stores 2000

*ptr1 = 10
*ptr2 = 20

==========================================================
POINTER SWAP PROGRAM
==========================================================
*/

#include <iostream>
using namespace std;

/*
    x -> Address of first variable
    y -> Address of second variable

    *x -> Actual value at address x
    *y -> Actual value at address y
*/
void swapNumbers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "Before Swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout << "\nAddresses" << endl;
    cout << "&x = " << &x << endl;
    cout << "&y = " << &y << endl;

    // Passing addresses
    swapNumbers(&x, &y);

    cout << "\nAfter Swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

/*
==========================================================
OUTPUT
==========================================================

Before Swapping
x = 10
y = 20

Addresses
0x7ffe...
0x7ffe...

After Swapping
x = 20
y = 10

==========================================================
COMPARISON
==========================================================

Call By Value
-------------
Copies Created      : YES
Original Modified   : NO

Call By Reference
-----------------
Copies Created      : NO
Original Modified   : YES

Call By Pointer
---------------
Copies Created      : NO
Original Modified   : YES

==========================================================
INTERVIEW POINT
==========================================================

Call by Value:
    Function works on copies.

Call by Reference:
    Function works on aliases of original variables.

Call by Pointer:
    Function works using memory addresses and dereferencing.

==========================================================
*/