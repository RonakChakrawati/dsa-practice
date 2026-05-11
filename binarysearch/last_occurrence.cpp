// last occurence in a sorted array 
// we find the last occurence in guven sorted array by comparing given target
// ex.  arr[] = {1,2,3,4,6,6,6,7,8,8,8,8,9,9,9,9,9,9,9,10,11,11,11,11,13,16,19};
// target = 6
// output = 6
// O(logn)


#include <iostream>
using namespace std;

int lastOccuredNumber(vector<int>& arr , int target){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            ans = mid ;
            low = mid + 1;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,4,5,6,8,9,12,14,17,19,22,25,29,46};
    int n = arr.size();
    int k;
    cout << "ENTER YOUR TARGET : ";
    cin >> k;
    cout << "your index is : " << lastOccuredNumber(arr,k)<< endl;
    return 0;
}
