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
*/

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
