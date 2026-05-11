#include <iostream>
#include <set>
using namespace std;


    vector<vector<int>> threeSum(vector<int>& arr, int n) {
        // Store unique triplets
        set<vector<int>> st;

        // First loop for first element
        for (int i = 0; i < n; i++) {
            // Second loop for second element
            for (int j = i + 1; j < n; j++) {
                // Third loop for third element
                for (int k = j + 1; k < n; k++) {
                    // If triplet sum is zero
                    if (arr[i] + arr[j] + arr[k] == 0) {
                        // Store sorted triplet to avoid duplicates
                        vector<int> temp = {arr[i], arr[j], arr[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }


int main() {

    vector<int> arr = {-1, 0, 1, 2, -1, -4, 3, 5, 8, -4, -2};
    int n = arr.size();
    vector<vector<int>> res = threeSum(arr, n);

    for (auto triplet : res) {
        for (auto num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}