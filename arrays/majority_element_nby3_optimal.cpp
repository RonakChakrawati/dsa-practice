// optimal sol for finding majority element II
// 

#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElementSecond(vector<int>& nums){
    int n = nums.size();
    int cnt1 = 0, cnt2 = 0, el1 = 0, el2 = 0;

    for (int i = 0 ; i < n ; i++){
        if(cnt1 ==0 && nums[i]!= el2){
            cnt1 = 1;
            el1 = nums[i];
        }
        else if(cnt2 == 0 && nums[i] != el1){
            cnt2 = 1;
            el2 = nums[i];
        }
        else if(el1 == nums[i]){cnt1++;}
        else if(el2 == nums[i]){cnt2++;}
        else{cnt1-- , cnt2--;}
    }

    cnt1 = 0, cnt2 = 0; 
    for (int i = 0; i < n; i++) {
        if (nums[i] == el1) {
            cnt1++; 
        }
        else if (nums[i] == el2) {
            cnt2++;
        }
    }
    int mini = n / 3  ;
    vector<int> result;
    if(cnt1 > mini){
        result.push_back(el1);
    }
    if(cnt2 > mini){
        result.push_back(el2);
    }
    return result;
}

int main(){
    vector<int> arr = {2,2,2,2,6,7,7,7,9,7};
    vector<int> ans = majorityElementSecond(arr);
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}