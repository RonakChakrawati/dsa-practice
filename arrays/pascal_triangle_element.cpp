// pascal traingle
// 1.  we find the value k in triangle row and coloumn will be given 
// by observing we saw the value is nCr n is row - 1 and r is column - 1

#include <iostream>
using namespace std;

long long nCr(int n , int r){
    long long res = 1;
    r=min(r,n-r);
    for(int i = 0 ; i < r ; i++){
        res = res * (n - i);
        res = res / (i + 1) ;
    }
    return res;
}

int main(){
    int n , r ;
    cout << "enter the row : ";
    cin >> n;
    cout <<"enter the column : ";
    cin >> r;
    cout << nCr(n-1,r-1) << endl;
    return 0;
}
