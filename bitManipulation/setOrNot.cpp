#include <iostream>
using namespace std;

int main(){
    int n = 13;
    int i = 2;
    if((n&(i<<i))!=0) cout << "not set" << endl;
    else cout << "set" << endl;
    return 0;
}