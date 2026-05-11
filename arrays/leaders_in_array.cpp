// 22. leaders in arrays

#include <iostream>
using namespace std;
int main(){
    int arr[] = {8,9,7,4,5,1,2,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int leader = arr[n-1];
    cout << leader << " ";
    for(int i = n-2; i >= 0 ; i--){
        if(arr[i]>leader){
            leader = arr[i];
            cout << leader << " ";
        }
    }
    cout << endl;
    return 0;
}

