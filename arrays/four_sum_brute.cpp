// four sum problem with given target
// brute

#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> fourSum(vector<int>&arr , int target){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    set<vector<int>> st;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            for (int k = j+1 ; k < n ; k++){
                for(int l = k+1 ; l < n ; l++){
                    long long sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if(sum == target){
                        vector<int> temp = {arr[i] , arr[j] , arr[k] , arr[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    return vector<vector<int>>(st.begin(),st.end());
}

int main(){
    vector<int> arr = {2,3,4,5,6,7,8,9,0,-1,-2,-3,-4,-5,-6,-7,-8,-9};
    int target = 0;
    vector<vector<int>> ans = fourSum(arr,target);
    for(auto i : ans){
        for(int quad : i){
            cout << quad << " ";
        }
        cout << endl;
    }
    return 0;
}