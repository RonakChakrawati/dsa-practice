// better approach 
#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row(m, 0);
    vector<int> col(n, 0);

    // First pass: mark rows and columns
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Second pass: apply zeroes
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1, 5, 0, 9, 8, 5},
        {1, 0, 1, 9, 5, 0, 4, 2},
        {1, 1, 1, 4, 4, 4, 4, 2}
    };

    setZeroes(matrix);

    for (auto &r : matrix) {
        for (int val : r) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}