#include <iostream>
using namespace std;

int main(){
    
    cout << "XOR of 13 and 5 : " << (13^5)<< endl;             // no of 1's is odd -> 1  and no of 0's is even -> 0
    cout << "AND of 13 and 5 : " << (13&5)<< endl;
    cout << "OR 13 and 5 : " << (13|5)<< endl;
    cout << "SHIFT 13 and 1 : " << (13>>1)<<endl;           // right shift -> a>>b  ->  a/pow(2,b);
    cout << "NOT OF 13 : " << ~(13) << endl;                // flip first -> if -ve (finds 2's compliment) , else stop
    cout << "NOT OF -13 : " << ~(-13) << endl; 

    // largest number int can stores  = INT_MAX -> 2^31 - 1
    // smallest number int can stores = INT_MIN -> -2^31

    return 0;                             
}