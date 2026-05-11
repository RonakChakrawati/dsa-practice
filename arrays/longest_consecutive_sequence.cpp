//  longest consecutive sequence of integers - brute

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return true;
    }
    return false;
}

int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    int longest = 1;

    for (int i = 0; i < n; i++) {

        // only start if this is the beginning of a sequence
        if (!linearSearch(arr, n, arr[i] - 1)) {

            int current = arr[i];
            int count = 1;

            while (linearSearch(arr, n, current + 1)) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "length of longest consecutive array is "<< longestConsecutive(arr, n) << endl;
}