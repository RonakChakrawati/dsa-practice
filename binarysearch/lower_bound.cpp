// lower bound 
// find the just small or equal number in array to given target 
// ex. arr[] = {1,4,6,7,8,12,56}
// x = 3 , output -> 0
// x = 7 , output -> 3

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}


int main() {
    vector<int> arr = {1,3,4,5,6,7,8,9,11,14,17,19,26,34,67,99,111};
    int target;
    cout << "ENTER THE TARGET : " ;
    cin >> target;
    int ans = lowerBound(arr,target);
    cout << "THE EQUAL OR JUST SMALL INDEX FOR ARRAY IS : " << ans << endl;
    return 0;
}