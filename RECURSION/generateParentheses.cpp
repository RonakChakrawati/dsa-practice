
#include <iostream>
using namespace std;

void parentheses(int n,int open,int close,string current,vector<string>& arr){
    if(current.size() == 2*n){
        arr.push_back(current);
        return;
    }
    if(open < n){
        current.push_back('(');
        parentheses(n,open+1,close,current,arr);
        current.pop_back();
    }
    if(close < open){
        current.push_back(')');
        parentheses(n,open,close+1,current,arr);
        current.pop_back();
    }
}

int main(){
    int n;
    string current;
    vector<string> arr;
    cout << "ENTER THE N : ";
    cin >> n;
    cout <<"\n";
    parentheses(n,0,0,current,arr);
    for(string i : arr) cout << i << "\n";
    cout << endl;
    return 0;
}