// 7 bits are enough to represent ascii value 
// 1byte is enough 
// unicode takes 2 byte - 16 bits
// lets say we have a temp cahr variable in which 'A' is stored 
// this store as 65 in computer memory
// end of string is denoted as \0
// or string terminator or null char 
// using \n changes the character into a string
// char name[10] = {'r','o','n','a','k'};    this is char stored
// char name[10] = {'r','o','n','a','k'};    this is a string now
// normal char will be stored in stack
// char * to a literal stores pointer on stack, data in read-only memory (not heap)



#include <iostream>
using namespace std;

int main(){
    char name[] =  {'q','r','h','u','\0'};
    char name2[] = "hello";
    const char *n = "welcome";
    for(int i = 0 ; n[i] != '\0' ; i ++){
        cout << n[i];
    }
    
    cout << endl;
    return 0;
}
