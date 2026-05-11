// koko eating banana
// no of piles is given to us and we have to finish all the banana 
// we need to find the min speed of eating a banana/hour 
// ex - {7,15,6,3} in 8hr
// output will be 5 banana/hr 

#include <iostream>
#include <vector>
#include <algorithm>

    using namespace std;

    bool canEatAll(vector<int>& piles, int speed, int h) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed; // Calculate hours needed for each pile
        }
        return hours <= h; // Check if total hours is within the limit
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; // Minimum speed
        int right = *max_element(piles.begin(), piles.end()); // Maximum speed

        while (left < right) {
            int mid = left + (right - left) / 2; // Calculate mid speed
            if (canEatAll(piles, mid, h)) {
                right = mid; // Try to find a smaller speed
            } else {
                left = mid + 1; // Increase speed
            }
        }

        return left; // Minimum speed to eat all bananas within h hours
    }

int main() {
    vector<int> piles = {7, 15, 6, 3};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl; // Output: 5
    return 0;
}