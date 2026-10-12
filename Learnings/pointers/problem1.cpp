#include<iostream>
using namespace std;


void swap(int *a , int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void modify(int *a , int *b){
  cout << *a << endl;
  *a += 10;
  *b *= 7;
  cout << *a << " " <<a << endl; 
  swap(a , b);

}

int main(){
  int a = 5;
  int b = 7;
  cout << &a << endl;
  modify(&a , &b );

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}
