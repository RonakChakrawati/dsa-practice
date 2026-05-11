// recursion tree and function flow
// WHY RECURSION TREES MATTER ??
// * Merge Sort
// * Quick Sort
// * DFS
// * Backtracking
// * DP


#include <iostream>
using namespace std;

int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    cout << fibo(10);
    cout << endl;
    return 0;
}

// O(2ˆN) - TC