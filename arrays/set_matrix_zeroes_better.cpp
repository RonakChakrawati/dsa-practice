// optimal solution

#include <iostream>
#include <vector>
using namespace std;

void setMatrixZero(vector<vector<int>>& matrix){
    bool firstRow = false;
    bool firstCol = false;
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0 ; i < m ; i++){
        if(matrix[i][0] == 0){
            firstCol = true;  // checking if first column has zero
            break;
        }
    }

    for(int j = 0 ; j < n ; j++){
        if (matrix[0][j]==0){
            firstRow = true;  // checking if first row has zero
            break;
        }
    }

    for(int i = 1 ; i < m ; i++){
        for(int j = 1 ; j < n ; j++){
            if(matrix[i][j]==0){  //  if matrix has 0 in it we change its corresponding row and coloum 1st element as 0 
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1 ; i < m ; i++){
        for(int j = 1 ; j < n ; j++){
            if(matrix[i][0]==0 || matrix[0][j] == 0){ 
                matrix[i][j] = 0;  //  changing the inner matrix into zeros according to outer matrix
            }
        }
    }

    if(firstCol){
        for(int i = 0 ; i < m ; i++){
            matrix[i][0] = 0;
        }
    }

    if(firstRow){
        for(int j = 0 ; j < n ; j++){
            matrix[0][j] = 0;
        }
    }

}

int main (){
    vector<vector<int>> matrix = {
        {3 , 4 ,4 , 9},
        {0 , 3 , 0 , 1},
        {1 ,3 , 9 , 8 },
        {3 , 9 ,8 ,7}
    };
    setMatrixZero(matrix);
    for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
    }
   
    return 0;
}
