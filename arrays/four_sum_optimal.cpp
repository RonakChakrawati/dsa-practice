// better approach

#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums , long long target){
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0 ;i < n ;i ++){
        if (i > 0 && nums[i] == nums[i-1]) continue;
        for (int j = i+1 ; j < n ;j++){
            if (j > i+1 && nums[j] == nums[j-1]) continue;
            int left = j+1;
            int right = n-1;

            while(left<right){
                long long sum = (long long)nums[i] +(long long)nums[j] + (long long)nums[left] + (long long)nums[right];

                if(sum == target){
                    res.push_back({nums[i],nums[j],nums[left],nums[right]});
                    left++;
                    right--;

                    while(left<right && nums[left] == nums[left-1]) left++;
                    while(left<right && nums[right] == nums[right+1]) right--;
                }
                else if(sum<target) left++;
                else right--;
            }
        }
    }
    return res;
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