#include <iostream>
using namespace std;

int main(){
    int n{13};
    int i{2};
    int k = n&(~(1<<i));
    cout << k << endl;
    return 0;
}