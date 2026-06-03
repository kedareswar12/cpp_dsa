// FIND THE BEST WAY WITH OUT USING LOOPS FIND THE GREATEST OF THREE

#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int max = (a>b) ? ((a>c)?a:c) :((b>c? b:c));
  cout<< max << endl;

}

// +++++++++++++++++++++++++++++++++++++++++++++++++ //
// it is the another way to write the if else 
// syntax-> (condition) ? TRUE : FALSE 

// WHEN WE FACE ISSSUE 
// (condition)?((condition) ? TRUE : FALSE):((condition)? TRUE : FALSE)