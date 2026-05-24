/*
Problem: Rotate Array
Link: https://leetcode.com/problems/rotate-array/
Description:
Rotate the array to the right by k steps.
Approach:
Uses an extra temporary array where each element is placed at its new rotated position using modular indexing.
Complexity:
- Time: O(N)
- Space: O(N)


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());

        for(int i = 0; i < nums.size(); i++) {
            temp[(i + k) % nums.size()] = nums[i];
        }

        nums = temp;
    }
};
*/


/*
Problem: Rotate Array
Link: https://leetcode.com/problems/rotate-array/

Rotate the array to the right by k steps.

Approach:
Uses in-place array reversal. First reverse the entire array, then reverse the first k elements and the remaining elements to achieve the required rotation efficiently.

Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
