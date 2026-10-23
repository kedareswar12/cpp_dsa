#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40};
    int* ptr = numbers; // Points to the first element (numbers[0])

    std::cout << "Traversing using pointer increment:\n";
    
    // Print current value, then increment pointer
    std::cout << *ptr++ << "\n"; // Prints 10, then ptr points to numbers[1]
    std::cout << *ptr++ << "\n"; // Prints 20, then ptr points to numbers[2]

    // Increment pointer first, then print value
    std::cout << *++ptr << "\n"; // ptr points to numbers[3], prints 40

    std::cout << "\nTraversing backward using pointer decrement:\n";
    std::cout << *ptr-- << "\n"; // Prints 40, then ptr points back to numbers[2]
    std::cout << *--ptr << "\n"; // ptr points to numbers[1], prints 20

    return 0;

    int arr[] = {10, 20, 30};
    int* ptr = arr; // Points to arr[0]

    ptr = ptr + 2;  // Valid! Moves the pointer forward by 2 elements.
    std::cout << *ptr; // Prints 30
}

/* 

ptr + 3 =  ptr +[ 3*int_data_size ]



#include<iostream>

int main() {
int arr[3] = {10, 20, 30};
int* ptr1 = &arr[0];
int* ptr2 = &arr[1];


// 1. Adding two pointers together
// The compiler will throw an error here because adding addresses is invalid.
// int* invalid_sum = ptr1 + ptr2;

// 2. Modifying a constant variable
const int limit = 100;
// The compiler will reject this assignment because limit is read-only.
// limit = 200;

// 3. Deleting stack-allocated memory
int stack_value = 42;
// Attempting to use delete on a variable on the stack causes a compilation 
// error or undefined behavior because delete is only for heap memory via new.
// delete &stack_value;

return 0;

*/