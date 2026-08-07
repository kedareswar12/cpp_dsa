#include<iostream>
using namespace std;

/*
12345
1234
123
12
1

*/

// 6
void print6(int n){
  for(int i=0 ;i<n ;i++){
    for(int j=1 ;j <= n-i-1 ; j++){
      cout << j << " " ;
    }
    cout  << endl;
  }
}

int main(){
    int times;
    cin >> times;
    for (int i=0 ; i<times ; i++){
      int n;
      cin >> n;
      print6(n);
    }
}