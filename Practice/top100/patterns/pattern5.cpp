#include<iostream>
using namespace std;

void print5(int n){
  for (int i=0 ; i<n ;i++){
    for(int j=n ; j>i ; j--){
      cout << "*" <<" ";
    }
    cout << endl;
  }
}

int main(){
  int times;
  cin >> times;
  for(int i=0;i<times;i++){
    int n;
    cin >> n;
    print5(n);
  }
}