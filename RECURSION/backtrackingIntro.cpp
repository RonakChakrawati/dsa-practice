// backtracking is about exploring all possibilities 
// get a choice - go deeper - undo choice - try another path

// WHY NECESSARY ?
// Because recursion shares same data structure sometimes. 
// Without undo: future recursive paths become corrupted.

#include <iostream>
#include <string>
using namespace std;

void sub( string s , int i , string curr , vector<string>&temp ){
    if(i == s.size()){
        temp.push_back(curr);
        cout << curr << "\n";
        return;
    }
    sub(s,i+1,curr+s[i],temp);
    sub(s,i+1,curr,temp);
}

int main(){
    string s = "abc";
    int i{0};
    string curr;
    vector<string>temp;
    sub(s,i,curr,temp);
    return 0;
}