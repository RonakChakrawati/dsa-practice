// decimal to binary conversion

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter a decimal number: ";
    cin >> n;
    
    int ans = 0 ;
    int pow = 1;
    while(n>0){
        int rem = n %2 ;
        ans = ans + (rem * pow);
        pow *= 10;
        n /=2;
    }
    cout << "Binary representation: " << ans << endl;
    return 0;
}