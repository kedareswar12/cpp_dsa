#include <iostream>
using namespace std;

int main() {

    // =====================================================
    // BASIC POINTER EXAMPLE
    // =====================================================

    int x = 123;
    float y = 21.1f;

    // -----------------------------------------------------
    // Printing Variable Values
    // -----------------------------------------------------
    cout << "Value of x : " << x << endl;
    cout << "Value of y : " << y << endl;

    // -----------------------------------------------------
    // Printing Memory Addresses
    // '&' -> Address-of Operator
    // -----------------------------------------------------
    cout << "\nAddress of x : " << &x << endl;
    cout << "Address of y : " << &y << endl;

    // -----------------------------------------------------
    // Pointer Declaration
    // A pointer stores the address of another variable.
    // -----------------------------------------------------
    int *ptr = &x;

    // -----------------------------------------------------
    // Printing Pointer Information
    // -----------------------------------------------------
    cout << "\nPointer ptr stores : " << ptr << endl;
    cout << "Value pointed by ptr : " << *ptr << endl;



    // ------------------------------------------------------
    //updating x through pointer 
    //-------------------------------------------------------

    *ptr = 50;
    cout << "After updating through the pointer value of x is " << x << endl;

    // output -> After updating through the pointer value of x is 50
    
    return 0;
}