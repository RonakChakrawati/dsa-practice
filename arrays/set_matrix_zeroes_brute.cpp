// set matrix to zeros
// brute approach  -  O(N^3)

// approach
// 1. check array and find 0
// 2. change row and coloum into -1 except 0 for all complete matrix
// 3. change -1 into 0


#include <iostream>
#include <vector>
using namespace std;

void setMatrixZero(vector<vector<int>> &matrix)
{
    int m = matrix.size();    // rows
    int n = matrix[0].size();     // columns


    // Step 1 & 2: mark affected cells with -1
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {

                // mark row
                for (int col = 0; col < n; col++)
                {
                    if (matrix[i][col] != 0)
                        matrix[i][col] = -1;
                }


                // mark column
                for (int row = 0; row < m; row++)
                {
                    if (matrix[row][j] != 0)
                        matrix[row][j] = -1;
                }
            }
        }
    }


    // Step 3: convert -1 to 0 (AFTER everything)
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 6, 8, 9},
        {3, 5, 0, 4, 9},
        {9, 5, 0, 2, 1},
        {5, 5, 9, 3, 1},
        {4, 7, 0, 8, 1}};

    setMatrixZero(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//  m is the number of rows of matrix
//  n is the elements present in row of matrix ->. column
//  i is the iterator tells about the row 
//  j is the iterator tells about the content of row ->  column
//  connection 