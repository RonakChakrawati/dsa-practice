// floor and ceiling in sorted array
// floor is just small no or equal no to target
// ceiling is just big no or equal no to target
// ex .  arr[] = {1,2,4,5,6,8,9}   target = 7
// output  6 , 8

// O(logn) 


#include <iostream>
#include <vector>
using namespace std;

int findFloor(vector<int>& arr, int k) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= k) {
            ans = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int findCeil(vector<int>& arr, int k) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= k) {
            ans = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 7, 7, 14};
    int k;
    cout << "ENTER THE TARGET: ";
    cin >> k;
    cout << "FLOOR: " << findFloor(arr, k) << endl;  // just low no. than target
    cout << "CEIL: " << findCeil(arr, k) << endl;    // just high no. than target
    return 0;
}
