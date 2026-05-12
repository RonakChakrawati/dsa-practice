// permutation 
// [1,2,3]
// [2,1,3] ,[2,3,1] , [3,2,1] , [3,1,2] , [1,3,2] , [1,2,3]
// numbers are non repeating 
// order doesnt matter

#include <iostream>
using namespace std;

void permute(vector<int>& arr,vector<int>& temp,vector<int>& used){
    if(temp.size() == arr.size()){
        for(int x : temp)cout << x << " ";
        cout << endl;
        return;
    }
    for(int i = 0; i < arr.size(); i++){
        if(used[i]) continue;
        temp.push_back(arr[i]);
        used[i] = 1;
        permute(arr, temp, used);
        temp.pop_back();
        used[i] = 0;
    }
}

int main(){
    vector<int> arr = {1,3,5};
    vector<int> temp;
    vector<int> used(arr.size(),0);
    permute(arr,temp,used);
    return 0;
}