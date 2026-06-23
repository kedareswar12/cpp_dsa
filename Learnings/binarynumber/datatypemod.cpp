/* 
Alter the Meaning of the Exsisting Data Types 


1. Long   =>   >= 4bytes (more than int)

{{INT -> 2^-31 TO 2^31- 1 
BECAUSE INT  = 4 BITS = 32 BYTES 
2^32 / 2 = 2^ 31 with sign and non signed }}

2. Short  =>   2 bytes

3. signed =>   same as int but signed 

4. unsigned => can only store non negative numbers 

5. long long => same as long long int 
*/



#include<iostream>
using namespace std;

int main(){

  cout << sizeof(long long int ) << endl;
  cout << sizeof(long int ) << endl;

}