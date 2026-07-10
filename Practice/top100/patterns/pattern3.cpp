#include<iostream>
using namespace std;


void print3(int n){
  for(int i=0 ; i<n ; i++){
    for(int j=1 ;j<=i+2 ; j++){
      cout<< j << " ";
    }
    cout << endl;
  }

}

int main(){
  int times;
  cin >> times;
  for(int i=0 ; i< times ;i++){
    int n;
    cin>>n;
    print3(n);

  }

  return 0;
}