// optimal solution
// O(n) and O(1)

#include <iostream>
using namespace std;

int longestZeroSumSubarray(vector<int>& arr) {
    unordered_map<int, int> mp;
    int n = arr.size();
    int prefix = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        if (prefix == 0) {
            maxLen = max(maxLen, i + 1);
        }
        if (mp.find(prefix) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefix]);
        } else {
            mp[prefix] = i;
        }
    }
    return maxLen;
}

int main(){
    vector<int> arr ={1,4,7,9,-5,-7,-9,-9,4,6,-5,-9,-3,-3,12,5,-9,-9,-5,-3,7};
    cout << "THE LENGTH OF LONGEST SUBARRAY IS : ";
    cout << longestZeroSumSubarray(arr) << endl;
    return 0;
}
