// backtrakking 
// print one subsequence whose sum == k

#include <iostream>
#include <vector>
using namespace std;

bool subSequences(int i,vector<int> &arr,vector<int> &temp,int sum,int k)      // k and arr is same | i , sum , temp changes
{
    int n = arr.size();
    if (i == n)
    {
        if (sum == k)
        {
            for (int x : temp) cout << x << " ";
            cout << endl;
            return true;
        }
        return false;
    }

    temp.push_back(arr[i]);
    sum += arr[i];
    if(subSequences(i + 1, arr, temp, sum, k)) return true;

    temp.pop_back();
    sum -= arr[i];
    if(subSequences(i + 1, arr, temp, sum, k)) return true;
    return false;
}

int main()
{
    vector<int> arr = {1, 3, 4, 5, 6, 7, 8, 9};
    vector<int> temp;
    subSequences(0, arr, temp, 0, 15);
    return 0;
}
