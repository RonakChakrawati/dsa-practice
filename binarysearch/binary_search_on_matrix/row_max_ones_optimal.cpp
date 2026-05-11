#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& row , int n , int x){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid =(low+high)/2;
        if(row[mid]>=x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int rowMaxZero(vector<vector<int>>& matrix , int n , int m ){
    int cnt_max = 0;
    int index = -1;
    for(int i = 0 ; i < n ; i ++){
        int cnt_ones = m - lowerBound(matrix[i],n,1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main(){
    vector<vector<int>> matrix = {{1,1,1} , {0,0,1},{0,0,0}};
    int n = 3;
    int m = 3;
    cout << "THE ROW WITH MAX 1'S : " << rowMaxZero(matrix,n,m) << endl; 
    return 0;
}