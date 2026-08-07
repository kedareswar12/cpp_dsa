#include<iostream>
using namespace std;


/*
        *****
      *****
    *****
  *****
*****

*/


void print9(int n){
  for(int i=0 ;i <n ;i++){
    for(int j =1 ; j <= n-i-1 ; j++){
      cout << " ";
    }
    for(int j=1 ; j<n+1; j++){
      cout << "*" ;
    }
    cout << endl;
  }

}
int main(){
  int times;
  cin >> times ;
  for(int i=0 ; i< times ;  i++){
    int n;
    cin >> n;
    print9(n);
  }
}