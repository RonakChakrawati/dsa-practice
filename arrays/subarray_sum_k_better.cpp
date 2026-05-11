// better approach 
// O(N^2)
// we are removing the third loop from here by knowing that we cann start the j from i to end of j

#include <iostream>
using namespace std;

int countSubarray(vector<int> &arr , int k){
    int n = arr.size();
    int count = 0 ;
    for (int i = 0 ; i < n ; i ++){
        int sum = 0 ; 
        for (int j = i ; j < n ; j++){
            sum = sum + arr [j];
            if(sum == k){
                count++;
            }  
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,1,1} ; 
    cout << "THE NO OF POSSIBLE SUBARRAY WHOSE SUM IS ARE : " << countSubarray(arr,2);
    cout << endl;
    return 0;
}
