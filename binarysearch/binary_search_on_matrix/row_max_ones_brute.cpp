#include <iostream>
using namespace std;

    int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
        int cnt_max = 0;  // Max number of 1s found
        int index = -1;   // Index of row with most 1s

        // Traverse each row of the matrix
        for (int i = 0; i < n; i++) {
            int cnt_ones = 0;  // Count 1s in current row
            for (int j = 0; j < m; j++) {
                cnt_ones += matrix[i][j];
            }
            // Update if this row has more 1s
            if (cnt_ones > cnt_max) {
                cnt_max = cnt_ones;
                index = i;
            }
        }
        return index;
    }

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
}
