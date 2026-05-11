// sqr root of given no.
// brute approach

#include <iostream>
using namespace std;

int squareRoot(int n){
    int ans ;
    for(int i = 0 ; i <= n ; i ++){
        if(i*i <= n){
            ans = i;
        }
    }
    return ans;
}

int main(){
    int n = 199;
    squareRoot(n);
    cout << "square root of given integer is " << squareRoot(n) << endl;
    return 0;
}