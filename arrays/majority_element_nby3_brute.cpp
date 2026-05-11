// majority element (more than n/3 elements)
// arr[] = {1,2,2,2,1,2,1,6,6}; n = 9 , n/3 = 3;
// here its 2 and 1

#include <iostream>
using namespace std;

vector<int> majorityElementTwo(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (result.size() == 0 || result[0] != nums[i])
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                // counting the frequency of nums[i]
                if (nums[j] == nums[i])
                {
                    cnt++;
                }
            }

            // check if frquency is greater than n/3:
            if (cnt > (n / 3))
                result.push_back(nums[i]);
        }

        // if result size is equal to 2 break out of loop
        if (result.size() == 2)
            break;
    }

    // return the majority elements
    return result;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};

    // Create an instance of Solution class

    vector<int> ans = majorityElementTwo(arr);

    // Print the majority elements found
    cout << "The majority elements are: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}