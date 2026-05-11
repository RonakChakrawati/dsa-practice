// calculate the factorial of a number using recursion

#include <iostream>
using namespace std;

int factorial(int n ){
    int fact = 1;
    for (int i = 1 ; i<=n ; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    if (r < 0 || r > n) return 0;
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    return num / den;
}

int main(){
    cout << nCr(10,9) << endl;
    return 0;   
}
