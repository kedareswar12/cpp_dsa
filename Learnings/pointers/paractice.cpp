#include<iostream>
using namespace std;

int main(){

  int b =10;
  int *ptr = &b;
  cout << &b << endl;
  cout<< &ptr << endl;
  cout<< *ptr << endl;
  cout<< ptr << endl;


  // pointer to pointer 

  int **pptr = &ptr;
  cout << pptr << endl;
// Null pointer 

  // int *ptr1 ;
  // cout << ptr1 << endl;
  // 0x7ffe79dbe960 -> garbage value 
  int *ptr1 = NULL ;
  cout << ptr1 << endl;
  // you will get the 0
  // cout << *ptr1 << endl;
  // segmentation fault  ->1775 segmentation fault (core dumped)  ./a.out

  return 0;
}