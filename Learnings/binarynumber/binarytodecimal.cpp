#include<iostream>
using namespace std ;

int bin_to_dec(int binary_value){
  int dec = 0;
  int pow =1;
  int n =binary_value;

  while(n>0){
    int last_digit = n%10;
    dec = dec + last_digit*pow;
    pow = pow *2;
    n=n/10;
  }
  return dec;
}

int main(){
  int binary_value ;
  cin >> binary_value;
  int decimal_value = bin_to_dec(binary_value);
  cout << decimal_value;
  return 0;
}