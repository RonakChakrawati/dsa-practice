// upper to lower case
// A - 65
// a - 97


#include <iostream>
using namespace std;

int main(){
    char name[] = "WELCOME";
    for(int i = 0 ; name[i] != '\0' ; i ++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + 32;
        }
    }
    cout << name << endl;
    return 0;
}
