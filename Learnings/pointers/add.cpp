#include<iostream>
using namespace std;

int main(){
  int x;
  int y;
  cin  >> x >> y;
int *ptrx = &x;
int *ptry = &y;

int result;

int *ptr_result = &result;

*ptr_result = *ptrx + *ptry ;
cout << *ptr_result << " " << result<< endl;

return 0;
}