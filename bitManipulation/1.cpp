// decimal to binary

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToBinary(int x) {
    if (x == 0) return "0";

    string s = "";
    while (x > 0) {
        s += (x % 2 == 0) ? '0' : '1';
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int convertToDecimal(string s){
    int ans{0};
    int j{0};
    for(int i = s.size()-1 ; i >=0 ; i-- ){
        if(s[i] == '1'){
            ans += pow(2,j);
            j++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main() {
    cout << convertToBinary(10) << endl;
    cout << convertToDecimal("100") << endl;
    return 0;
}