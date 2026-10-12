#include<iostream>
using namespace std;
// for binary search the array need to be sorted 

void printArr(int *arr , int n){
  for (int i=0 ; i<n ;i++){
    cout << arr[i] << " " ;
  }
  cout << endl;
}

int binary_search(int arr[] , int n ,int key){
  int start = 0;
  int end = n-1;
  
  while(start <= end){
    // step 1 find the mid
    int mid = (start + end)/2;

    if (arr[mid] == key){
      return mid;
    }
    else if(arr[mid]< key){
      start = mid+1;
    }
    else 
    {
      end = mid-1;
    }
  }

  return -1;
}

int main(){
  int arr[] = {5,6,7,8,9,10,11,12,13};
  int key = 11;
  int n = sizeof(arr) / sizeof(int);
  cout << binary_search(arr, n ,key) << endl;

}