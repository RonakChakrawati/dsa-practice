// binary code generate
// uses 1 and 0

#include <iostream>
#include <vector>
using namespace std;

void binaryCode(int i, int n, vector<int>& temp){

    if(i == n){
        for(int x : temp) cout << x << " ";
        cout << endl;
        return;
    }
    temp.push_back(0);
    binaryCode(i + 1, n, temp);
    temp.pop_back();
    temp.push_back(1);
    binaryCode(i + 1, n, temp);
    temp.pop_back();
}

int main(){
    vector<int> temp;
    binaryCode(0, 3, temp);
    return 0;
}