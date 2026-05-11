// optimal approach 
// transposing i to j and jnto i
// reverse every row 

#include <iostream>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<vector<int>> ans(n ,vector<int>(n));
    for(size_t i = 0 ; i < n ; i++){
        for(size_t j = 0 ; j < n ; j++ ){
            ans[j][i] = matrix[i][j];
        }
    }
    matrix = ans;
    
    for(int i = 0 ; i < n ; i ++){
        reverse(matrix[i].begin() , matrix[i].end());
    }
    
}

int main(){
    vector<vector<int>> matrix ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotateMatrix(matrix);
    for(size_t i = 0 ; i < matrix.size() ; i++){
        for(size_t j = 0 ; j < matrix[0].size() ; j++ ){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}