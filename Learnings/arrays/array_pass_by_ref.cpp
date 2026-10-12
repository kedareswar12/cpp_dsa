#include<iostream>
using namespace std;



int func(int arr[]){
  arr[1] = 1000;
  return 0;
}
int main(){
  int arr[] = {1,2,3,4,5};
  int lenght = sizeof(arr) / sizeof(int);
  cout << *arr << endl;
  func(arr);
  cout << *(arr+1) << endl;

  
  return 0;
  // every time you pass the array in the function try to pass the size of the array too because by passing the array size only the the new (pointer array) will be able to locate the array in the call stack 
}