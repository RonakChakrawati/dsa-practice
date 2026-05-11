// print the row of pascal triangle given Nth row

#include <iostream>
using namespace std;

    // Function to generate the Nth row of Pascal's Triangle
    vector<long long> getNthRow(int N) {
        // Result vector to store the row
        vector<long long> row;
        
        // First value of the row is always 1
        long long val = 1;
        row.push_back(val);
        
        // Compute remaining values using the relation:
        // C(n, k) = C(n, k-1) * (n-k) / k
        for (int k = 1; k < N; k++) {
            val = val * (N - k) / k;
            row.push_back(val);
        }
        return row;
    }

int main() {
    int N = 5; 
    vector<long long> result = getNthRow(N);
    for (auto num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
