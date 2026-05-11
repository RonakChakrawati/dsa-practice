// combination sum

#include <iostream>
using namespace std;

void combinationSum(int i ,vector<int>& arr , int target , vector<int>& temp ){
    if(i == arr.size()){
        if(target == 0){
            for(int x : temp){
                cout << x << " ";
            }
            cout<<endl;
        }
        return;
    }
    if(arr[i]<=target){
        temp.push_back(arr[i]);
        combinationSum(i,arr,target-arr[i],temp);
        temp.pop_back();
    }
    combinationSum(i+1,arr,target,temp);
}

int main(){
    vector<int> arr={1,3,4,5,6,7,8,9,2};
    vector<int>temp;
    combinationSum(0,arr,7,temp);
    cout<<endl;
    return 0;
}