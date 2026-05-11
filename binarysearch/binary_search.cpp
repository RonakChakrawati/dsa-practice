#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
        return mid;

    if (arr[mid] < x)
        low = mid + 1;

    else
        high = mid - 1;
    }
    return -1;
}

int main(){
    vector<int> arr = {2,4,3,35,4,5,6,7,78,7,6,4,56,543,53,2,345};
    int k;
    cout << "ENTER YOUR TARGET K : " ;
    cin >> k;
    int result = binarySearch(arr,k);
    cout << "THE INDEX OF ELEMENT GIVEN : " << result<< endl;
    return 0;
}