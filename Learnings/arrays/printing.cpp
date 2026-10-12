#include<iostream>
using namespace std;

int main(){
  int array[5] = {7,5,2,1,3};
  int length = (sizeof(array) / sizeof(int)) ;


  // for taking the input from the user
  for(int i=0 ; i<length ; i++){
    cin >> array[i]; 
  }

  // for printitng the outputs 
  for (int i = 0 ; i < length; i++)
  {
    cout << array[i] << endl;
  }


  return 0;
}