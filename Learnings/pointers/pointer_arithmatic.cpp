/*
============================================================
                POINTER ARITHMETIC IN C++
============================================================

Pointer Arithmetic allows us to move through memory locations
using pointers.

Allowed Operations:
-------------------
1. Increment      -> p++
2. Decrement      -> p--
3. Addition       -> p + n
4. Subtraction    -> p - n
5. Pointer Difference -> p1 - p2

Not Allowed:
------------
1. Multiplication -> p * n
2. Division       -> p / n
3. Modulus        -> p % n

Reason:
Pointers store memory addresses, not normal numbers.

============================================================
1. POINTER INCREMENT (p++)
============================================================

For an integer pointer:

    p++

moves the pointer to the next integer location.

Example:

Address      Value
-------      -----
1000         10
1004         20
1008         30
1012         40

If:

    int *p = 1000;

Then:

    p++;

Pointer becomes:

    1004

NOTE:
Pointer increment moves by sizeof(data_type).

For int:
    sizeof(int) = 4 bytes

============================================================
2. POINTER DECREMENT (p--)
============================================================

Moves the pointer to the previous element.

Example:

Address      Value
-------      -----
1000         10
1004         20
1008         30

If:

    p = 1008

Then:

    p--;

Pointer becomes:

    1004

============================================================
3. POINTER ADDITION (p + n)
============================================================

Formula:

    New Address =
    Current Address + (n * sizeof(data_type))

Example:

Current Address = 1000

p + 3

1000 + (3 * 4)
=
1012

============================================================
4. POINTER SUBTRACTION (p - n)
============================================================

Formula:

    New Address =
    Current Address - (n * sizeof(data_type))

Example:

Current Address = 1012

p - 2

1012 - (2 * 4)
=
1004

============================================================
5. DIFFERENCE BETWEEN TWO POINTERS
============================================================

Allowed only if both pointers belong to the same array.

Example:

Index:
0 1 2 3 4

Pointer 1 -> arr[4]
Pointer 2 -> arr[1]

p1 - p2

4 - 1 = 3

Output:
3

NOTE:
Result is in elements, not bytes.

============================================================
6. ARRAY NAME AS POINTER
============================================================

Array name stores the address of the first element.

Example:

arr == &arr[0]

Both represent the same address.

============================================================
7. ACCESSING ARRAY ELEMENTS
============================================================

arr[0]
*(arr)
*(arr+0)

All are same.

--------------------------------

arr[1]
*(arr+1)

Both are same.

--------------------------------

arr[2]
*(arr+2)

Both are same.

============================================================
PROGRAM 1 : POINTER INCREMENT
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};

    int *p = arr;

    cout << "Current Value : " << *p << endl;

    p++;

    cout << "After p++ : " << *p << endl;

    return 0;
}

/*
Output:

Current Value : 10
After p++ : 20

============================================================
PROGRAM 2 : POINTER DECREMENT
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};

    int *p = &arr[3];

    cout << *p << endl;

    p--;

    cout << *p << endl;
}

Output:

40
30

============================================================
PROGRAM 3 : POINTER ADDITION
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};

    int *p = arr;

    cout << *(p + 3);

    return 0;
}

Output:

40

============================================================
PROGRAM 4 : POINTER SUBTRACTION
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40};

    int *p = &arr[3];

    cout << *(p - 2);

    return 0;
}

Output:

20

============================================================
PROGRAM 5 : POINTER DIFFERENCE
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};

    int *p1 = &arr[4];
    int *p2 = &arr[1];

    cout << p1 - p2;

    return 0;
}

Output:

3

============================================================
PROGRAM 6 : ARRAY TRAVERSAL USING POINTERS
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};

    int *p = arr;

    for(int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
    }

    return 0;
}

Output:

10 20 30 40 50

============================================================
PROGRAM 7 : ARRAY NAME AS POINTER
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30};

    cout << arr << endl;
    cout << &arr[0] << endl;

    return 0;
}

Output:

Both lines print the same address.

============================================================
PROGRAM 8 : ACCESSING ARRAY ELEMENTS
============================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30};

    cout << arr[0] << endl;
    cout << *(arr) << endl;

    cout << arr[1] << endl;
    cout << *(arr + 1) << endl;

    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    return 0;
}

Output:

10
10
20
20
30
30

============================================================
SIZE EFFECT ON POINTER ARITHMETIC
============================================================

int* pointer:
-------------
p++
moves 4 bytes

char* pointer:
--------------
p++
moves 1 byte

double* pointer:
----------------
p++
moves 8 bytes

============================================================
QUICK REVISION
============================================================

p++         -> Next Element
p--         -> Previous Element
p+n         -> Move n Elements Forward
p-n         -> Move n Elements Backward
*(p+n)      -> Access nth Element
arr         -> Address of First Element
arr==&arr[0]-> True
p1-p2       -> Distance Between Elements

============================================================
GOLDEN RULE
============================================================

Pointer Arithmetic works in terms of elements,
not bytes.

Compiler automatically multiplies by:

    sizeof(data_type)

============================================================
*/