// print no from 1 to n using funcition

#include <iostream>
using namespace std;

void printNumbers(int n){
    for (int i = 0 ; i <= n ; i++){
    cout << i << " ";
    }
    cout << endl ; 
}

int main(){
    printNumbers(10000);
    return 0;
}
