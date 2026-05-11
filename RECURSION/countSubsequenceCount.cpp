// count the total number of subsequence wose sum is k

#include <iostream>
using namespace std;

int countSubseq(int i,vector<int>& arr,int sum,int k){

    if(i == arr.size()){
        if(sum == k) return 1;
        return 0;
    }

    sum += arr[i];
    int left = countSubseq(i + 1, arr, sum, k);

    sum -= arr[i];
    int right = countSubseq(i + 1, arr, sum, k);

    return left + right;
}

int main(){
    vector<int> arr = {1, 3, 4, 5, 6, 7, 8, 9};
    vector<int> temp;
    cout << countSubseq(0, arr, 0, 15) << endl;
    return 0;
}