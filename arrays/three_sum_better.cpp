// better approach in 3 sum problem

#include <iostream>
#include <set>
using namespace std;


vector<vector<int>> threeSum(vector<int>& arr){
    int n = arr.size();
    set<vector<int>> ans ;
    for(int i = 0 ; i < n ; i++){
        set<int> hashset;
        for(int j= i + 1 ; j < n ; j++){
            int third = -(arr[i] + arr[j]);

            if (hashset.find(third) != hashset.end()){
                vector<int> temp = {arr[i] , arr[j] , third};
                sort(temp.begin(),temp.end());
                ans.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    return vector<vector<int>>(ans.begin(),ans.end());
}


int main(){
    vector<int> arr = {2,5,7,-1,-3,-9,8,7,0,0,1,-1,-1};
    int n = arr.size();
    vector<vector<int>> res = threeSum(arr);

    for (auto &tri : res) {
    for (auto &num : tri) {
        cout << num << " ";
    }
    cout << endl;
}
    return 0;
}
