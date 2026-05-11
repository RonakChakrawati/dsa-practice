#include <iostream>
using namespace std;

int fun(int n){
    if(n>0){
        int ans = fun(n-1)+n;
        cout << ans <<"\n";
    }
    return 0;
}

int main(){
    fun(7);
    return 0;
}