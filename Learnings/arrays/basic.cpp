// array -> linear structure with same datatypes in contiguous memory spaces 
// index -> position

#include<iostream>
using namespace std;

int main()
{
  // creating the array 
  // 3 types
  // int marks[50];
  // int marks[50] = {1,2,3};
  int marks[] = {1,2,3,4};
  cout << marks << endl;
  // for (int i=0 ; i< )
  // memory will be allocated statically allocated during the compile time 
  cout << sizeof(marks) << endl; // 4*4 16 bbytes 
  int length = sizeof(marks) / sizeof(int);
  cout << length << endl;
  return 0;
}
