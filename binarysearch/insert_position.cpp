// insert position 
// give index for the new element
// ex. ar[] = {1,3,5,6,8,9}.  k = 7
// output -> 4
// at 4th index if we put 7 the array will be sorted


#include <iostream>
using namespace std;

int insertPosition(vector<int>& arr , int k){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high) / 2;
        if(arr[mid]>=k){
            ans = mid;
            high = mid - 1;
        }

        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,5,6,8,10};
    int k;
    cout << "ENTER THE VALUE : " ;
    cin >> k;
    cout << insertPosition(arr,k) << endl;
    return 0;
}