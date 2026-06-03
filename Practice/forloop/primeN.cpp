#include<iostream>
using namespace std;

int main() {
    int Num;
    cin >> Num;
    bool isPrime = true;
    if(Num <= 1) {
        isPrime = false;
    }
    for(int i = 2; i * i <= Num-1; i++) {
        if(Num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        cout << "Prime Number";
    else
        cout << "Composite Number";

    return 0;
}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++
// to make this more understandable here you are looping from 2 to NUM-1 so time is more 
// see the composite once sqrt(n) * sqrt(n) = n will be the max so loop upto sqrt(n)
// so that you will not able to get the chance to loop thought allll 