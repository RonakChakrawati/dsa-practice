// find out how many times the array has been rotatetd


#include <iostream>
using namespace std;

class Solution {
public:
    int findRotations(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        while (low < high) {

            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {8,9,10,11,7,6,5,4};

    int rotations = sol.findRotations(arr);

    cout << rotations << endl;
    return 0;
}
                                