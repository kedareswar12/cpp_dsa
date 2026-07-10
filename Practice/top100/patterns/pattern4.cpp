#include<iostream>
using namespace std;

void print4(int n){
  for(int i=1;i<=n;i++){
    for(int j=0 ; j<=i ;j++){
        cout<< i << " ";
    }
    cout << endl;
  }
}


int main(){
  int times;
  cin >> times;
  for(int i=0 ;i< times ;i++){
    int n;
    cin >> n;
    print4(n);
  }
}