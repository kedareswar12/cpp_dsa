#include<iostream>
using namespace std;

int bintodec (int num){
  int n = num;
  int dec = 0;
  int pow  = 1;

  while(n>0){
    int lastdigit = n %10 ;
    dec += lastdigit * pow ;
    pow = pow *2;
    n= n/10;
  }
  return dec ;
}


int main(){
  int binval =0;
  cin >> binval;
  int dec = bintodec(binval);
  cout << dec << endl;

}