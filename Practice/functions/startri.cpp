#include<iostream>
using namespace std;

// int main(){
//   int n =3;
//   for(int i =1; i<=n ; i++){
//     for(int j =1; j<=i ;j++){
//       cout << "* "
//     }
//     cout<< endl;
//   }
//   for(int i =1; i<=4 ; i++){
//     for(int j =1; j<=i ;j++){
//       cout << "* "
//     }
//     cout<< endl;
//   }
//   for(int i =1; i<=5 ; i++){
//     for(int j =1; j<=i ;j++){
//       cout << "* "
//     }
//     cout<< endl;
//   }

// }


void Patternfunction(int a){

  for(int i =1; i<=a ; i++){
    for(int j = 1; j<=i ; j++){
      cout << " *" ;
    }
    cout << endl;
  }

}

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  Patternfunction(a);
  Patternfunction(b);
  Patternfunction(c);
}
