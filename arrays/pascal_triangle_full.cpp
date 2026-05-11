//  print the whole pascal traingle of given n 

#include <iostream>
using namespace std;

    // Function to generate the Nth row of Pascal's Triangle
    vector<long long> getNthRow(int N) {
        // Result vector to store the row
        vector<long long> row;
        
        int val = 1;
        row.push_back(val);
        
        // Compute remaining values using the relation:
        // C(n, k) = C(n, k-1) * (n-k) / k
        for (int k = 1; k < N; k++) {
            val = val * (N - k) / k;
            row.push_back(val);
        }
        return row;
    }

vector<vector<long long >> getPascaltraingle(int n){
    vector<vector<long long>> ans ;
    for(int i = 1; i <= n ; i++){
        ans.push_back(getNthRow(i));
    }
    return ans;
}

int main() {
    int N ;
    cout << "ENTER THE SIZE OF TRIANGLE : ";
    cin >> N;
    vector<vector<long long>> result = getPascaltraingle(N);
    for (const auto &row : result) {
        for (auto x : row) cout << x << " ";
        cout << endl;
    }
    return 0;
}