// longest subarray length with the sum 0 
// brute force
// O(n^2)


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int longestZeroSumSubarray(vector<int>& arr) {
    int n = arr.size();
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}


int main(){
    vector<int> arr ={1,4,7,9,-5,-7,-9,-9,4,6,-5,-9,-3,-3,12,5,-9,-9,-5,-3,7};
    cout << "the length of the longest subarray is : ";
    cout << longestZeroSumSubarray(arr) << endl;
    return 0;
}