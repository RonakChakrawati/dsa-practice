// 24.  rotate array by 90 degree , like

// {1,2,3}      {7,4,1}
// {4,5,6}  ->  {8,5,2}
// {7,8,9}      {7,6,3}

// brute approach -> WE FIND THAT PATTERN THAT 
// [i][j] -> [j][n-1-i]
// so we go in 2d array and put the value of matrix in ans accordingly

#include <iostream>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> ans(n,vector<int>(n)) ;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    matrix = ans;
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotateMatrix(matrix);
    for(size_t i = 0 ; i < matrix.size() ; i++){
        for(size_t j = 0 ; j < matrix[0].size() ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
