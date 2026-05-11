// count the no of subarray with xor k

#include <iostream>
using namespace std;

int numberSubarrayKxor(vector<int>& arr , int k){
    int count = 0;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        int xorVal = 0;
        for(int j = i ; j < n ; j++){
            xorVal = xorVal^arr[j];
            if(xorVal == k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,4,2,6,7,8,9,9,9,9,9,0,0,7,6,6,5,5,4,4};
    int k;
    cout << "ENTER THE VALUE OF K : " ;
    cin >> k;
    cout << numberSubarrayKxor(arr,k) << endl;
    return 0;
}
