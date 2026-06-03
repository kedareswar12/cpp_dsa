#include<iostream>
using namespace std;

// nCr = n! / r! * (n-r)!

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int combination(int n, int r){

    if(n >= r){

        int num = factorial(n);
        int den = factorial(r) * factorial(n-r);

        int comb = num / den;

        return comb;
    }

    return 0;
}

int main(){

    int n, r;

    cin >> n >> r;

    cout << combination(n, r);

    return 0;
}