// count word in given string 

#include <iostream>
using namespace std;
int main(){

    char a[] = " hello this is counting string ";
    int n = strlen(a);
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == ' ' && a[i+1] != ' '){
            count++;
        }
    }
    cout << "total words in string : " << count << endl;
    return 0;
}