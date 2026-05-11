// counting vowels and consonents

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[] = "HOW ARE YOU ? ";
    int n = strlen(a);
    int vCount = 0;
    int cCount = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            vCount+=1;
        } else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            cCount++;
        }
    }
    cout << "THE NO OF VOWELS : " << vCount << endl;
    cout << "THE NO OF CONSONENETS : " << cCount << endl;

    return 0;
}
