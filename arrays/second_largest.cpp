// second largest element in an array

#include <iostream>
using namespace std;

int secLargest(vector<int> a, int n) {
    int largest = a[0];
    int sLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            sLargest = largest;
            largest = a[i];
        } 
        else if (a[i] < largest && a[i] > sLargest) {
            sLargest = a[i];
        }
    }

    if (sLargest == INT_MIN)
        return -1; // No second largest (all elements equal)
    
    return sLargest;
}

int main() {
    vector<int> arr = {10, 20, 20, 8, 6};
    cout << secLargest(arr, arr.size()) << endl;
    return 0;
}