#include<iostream>
using namespace std;
int Linear_search(int arr[] , int n , int key){

  for (int i=0 ; i<n ; i++){
    if (arr[i] == key){
      return i;
    }
  }
  return -1;
  
}

int main() {
  int arr[] = {2,4,6,8,10,12,14};
  int n = sizeof(arr)/ sizeof(int);
  cout << Linear_search(arr ,n, 10 ) << endl;

}