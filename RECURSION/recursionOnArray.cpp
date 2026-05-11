// recursion on array 

#include <iostream>
using namespace std;

// recursion to print array elements
void printArray(int i,vector<int>&arr){
    if(i == arr.size()) return;
    cout << arr[i] << " ";
    printArray(i+1,arr);
    
}

// reversing an array using recursion
void reverseArray(int l ,int r , vector<int>&arr){
    if(l>=r){
        for(int i = 0 ; i < arr.size() ; i++){
            cout << arr[i] << " ";
        }
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(l+1,r-1,arr);
}

// checking palindrome
void checkPalindrome(int l , int r, vector<int>& arr){
    if(l>=r){
        cout << "THE NUMBER IS PALINDROME ";
        return;
    }
    if(arr[l] != arr[r]){
        cout << "THE NUMBER IS NOT PALINDROME ";
        return;
    }
    checkPalindrome(l+1,r-1,arr);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    printArray(0,arr);
    cout << "\n";
    reverseArray(0,n-1,arr);
    cout << "\n";
    checkPalindrome(0,n-1,arr);
    return 0;
}