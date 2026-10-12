#include <iostream>
using namespace std;

int Pass_by_pointer(int *ptr){
  *ptr = 200 ;
  cout << *ptr << endl;
  return 0;
}


int Pass_by_reference(int &b){
  b = 100;
  cout << b << endl;
  return b;

}

int Pass_by_value(int variable){
  variable = 100;
  cout << variable << endl;
  return variable;

}

int Add_by_reference(int &a , int &b){
  cout << a+b << endl;
  return a+b;
}

int Swap_int_pointers(int *a , int *b){
  int temp=0;
  temp = *a ;
  *a = *b;
  *b = temp;

  cout  << *a << " " << *b  << endl;
  return *a, *b;
}

int main(){
  int a = 10;
  int b = 20;
  cout << a << endl;
  Pass_by_value(a);
  Pass_by_reference(a);
  Pass_by_pointer(&a);
  Add_by_reference(a,b);
  Swap_int_pointers(&a , &b);

  return 0;

}