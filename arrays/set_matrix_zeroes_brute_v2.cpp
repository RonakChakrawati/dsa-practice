// set zero of matrix - better
// TC O(2mn)  SC O(m+n)

// aproach
// 1.  track in matrix for 0
// 2.  get two arrays outside of matrix
// 3.  if we find 0 , put 1 corresponding in that array of row and column
// 4.  at end , change that row and column into 0's 

#include <iostream>
#include <vector>
using namespace std;

void setMatrixZero(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> row(m,0);
    vector<int> col(n,0);
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
}

int main(){
    vector<vector<int>> matrix ={
        {2,4,7,4},
        {1,0,5,8},
        {9,6,4,1},
        {1,7,0,1}
    };

    setMatrixZero(matrix);

    for(int i = 0 ; i < matrix.size() ; i++){
        for(int j = 0 ; j < matrix[0].size() ;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}