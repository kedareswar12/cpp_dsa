#include<iostream>
using namespace std;


int decimal_to_binary (int decimal_value){
  int n = decimal_value;
  int pow = 1;
  int bin =0;

  while(n>0){
    int remainder = n%2;
    bin = bin + (remainder * pow);
    pow = pow *10 ;
    n = n/2;
  }
  return bin;

}
int main(){
  int decimal_value;
  cin >> decimal_value;
  int binary_value = decimal_to_binary(decimal_value);
  cout << binary_value;
}