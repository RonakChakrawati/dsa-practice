// upper bound
// find just bigger element given in array from target
// arr[] = {1,2,3,4,5,6,7,8,9,10,12,15,17,19,37,48,68,70,89,99}
// target = 7 , output = 7
// target = 17 , output = 13

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &arr, int x) {
    int n = arr.size() - 1;    
    int low = 0, high = n - 1;
        int ans = n;  

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] > x) {
                ans = mid;        
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }
        return ans;  
    }

int main(){
    vector<int> arr = {1,3,4,5,6,7,8,9,11,14,17,19,26,34,67,99,111};
    int target;
    cout << "ENTER THE TARGET : " ;
    cin >> target;
    int ans = upperBound(arr,target);
    cout << "THE JUST LARGE ELEMENTS'S INDEX FOR ARRAY IS : " << ans << endl;
    return 0;
}
