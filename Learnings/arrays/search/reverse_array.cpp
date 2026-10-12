#include<iostream>
using namespace std;

void print_array(int *arr , int n){
  for (int i=0 ; i<n ;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int tow_pointer_no_space(int arr[] , int n){
    int start = 0;
    int end = n-1;
    int temp=0;
  
    while(start < end){
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;

      start  ++ ;
      end--;
    }
    print_array(arr, n);
    return 0;
    
}

int with_extra_space(int arr[] ,int n){
  int copyArray[n];
  for (int i=0 ; i< n ;i ++){
    int j = n-i-1;
    copyArray[i] = arr[j];
  }
  for (int i=0 ; i<n ;i++){
    arr[i] = copyArray[i];
  }
  print_array(arr, n);
  return 0;
}
void reverse_array_normal(int arr[] , int n){
  int i=n-1;
  while(i >= 0){
    cout << arr[i] << " ";   // use the element first
    i--;                     // then move left
  }
  cout << endl;
}

int main(){
  int arr[] = {1,12,3,1,3,4,5,3,2,4,5,2,3,4};
  int n= sizeof(arr)/sizeof(int);
  // cout << reverse_array_normal(arr, n) << endl;
  // reverse_array_normal(arr, n);
  // with_extra_space(arr , n);
  tow_pointer_no_space(arr ,n);
  return 0;
}