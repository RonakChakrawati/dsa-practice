// parameterized and functional recursion

#include <iostream>
using namespace std;

// parameterized recursion | Downward phase - DOWN: answer grows | UP : nothing important | mostly void
// Parameterized
// * accumulating answer
// * tracking path/state
// * tail recursion
// * DFS counters

void sum(int n, int s){
    if(n == 0){
        cout << s;
        return;
    }
    sum(n - 1, s + n);
}


// functional recursion | Unwinding phase - DOWN : just calls | UP : real computation happens | can be int bool double etc
// Functional
// * combining answers
// * tree recursion
// * divide & conquer
// * DP
// * recursion math

int sum(int n){
    if(n == 0) return 0;
    cout << n << "\n";
    return n + sum(n - 1);
}

int main(){
    sum(5);
    cout << endl;
    sum(5,0);
    cout << endl;
    return 0;
}