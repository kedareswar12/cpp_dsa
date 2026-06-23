#include<iostream>
using namespace std;

// ncr  = n! / r!*(n-r)*

int factorial(int num){
  int fact = 1;
  for(int i=1; i<=num ; i++){
    fact = fact*i;
  }
  return fact;
}
int main(){
  int n=0, r=0;
  cin >> n >> r;
  int nfact = factorial(n);
  int rfact = factorial(r);
  int nminusrfact = factorial(n-r);

  int binomialcoefficient = nfact/ (rfact *nminusrfact);
  cout <<  binomialcoefficient ;
}