#include<iostream>
using namespace std;

int main(){
  int x = 123;
  cout << x  << endl;
  cout << &x << endl;

  int *ptr = &x;
  cout<< ptr << endl;
  cout<< *ptr << endl;  // pointer de reference 
}