// passing the arguments


// 1 . Pass by value 
// 2 . Pass by reference 


// what eaxctly happens in the call by value 


#include<iostream>
using namespace std;

// int ChangeA(int &a ){
//   a = 56;
//   cout << a << endl;
//   return a ;
// }

// pass by pointers 

int ChangeA(int *a)
{
  *a = 32;
  cout << *a  << "inside the ChangeA function "<< endl;
  return *a;
}


int main()
{
  int a = 134;
  cout << a << endl;
  ChangeA(&a);
  cout << a << endl;

  
}