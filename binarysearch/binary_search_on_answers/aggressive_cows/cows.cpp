// agreesive cowss

#include <iostream>
using namespace std;

int canWePlaceCows(int stalls[], int cows, int n, int minDist) {
    int count = 1; // Place the first cow in the first stall
    int lastPosition = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPosition >= minDist) {
            count++;
            lastPosition = stalls[i];
            if (count == cows) {
                return true; // Successfully placed all cows
            }
        }
    }
    return false; // Could not place all cows with the given minimum distance
}

int main(){
    int n, cows;
    cin >> n >> cows;
    int stalls[n];
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    // Sort the stalls array (required for binary search)
    sort(stalls, stalls + n);
    int low = 0;
    int high = stalls[n - 1] - stalls[0];
    int result = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canWePlaceCows(stalls, cows, n, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << result << endl; 

    return 0;
}
