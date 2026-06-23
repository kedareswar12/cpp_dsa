#include<iostream>
using namespace std;


int destobinary(int decimal){
  int n = decimal; 
  int bin =0 ;
  int pow =1;

  while (n> 0){
    int remainder = n%2;
    bin += remainder * pow;
    pow =pow*10;
    n= n/2;
  }
  return bin;
}
int main(){
  int destobin;
  cin >> destobin;
  destobinary(destobin);
}