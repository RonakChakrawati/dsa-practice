// print sum of n natural no from 1 to n using function

#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n){
    int summ = 0 ;
    for (int i = 0 ; i <= n ; i++){
        summ = summ + i ;
    }
    return summ;
}

int main(){
    cout << sumOfNaturalNumbers(11) << endl;
    return 0;
}