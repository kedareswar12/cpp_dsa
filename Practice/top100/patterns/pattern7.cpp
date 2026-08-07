#include <iostream>
using namespace std;

/*
    *
   ***
  *****
 *******
*********

*/

void print7 (int n){
  for (int i =0 ; i<n ; i++){
    // space 
    for(int j = 1 ; j<= n-i-1; j++ ){
      cout << " " ;
    }
    //star
    for(int j = 1 ; j<= 2*i+1; j++ ){
      cout << "*" ;
    }
    //space
    for(int j = 1 ; j<= n-i-1; j++ ){
      cout << " " ;
    }
    cout << endl;
  }


}
int main(){
  int times;
  cin >> times ;
  for (int i = 0 ; i < times ; i++){
    int n ;
    cin >> n;
    print7(n);
  }
}