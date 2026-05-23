/*
Problem: Remove Element
Link: https://leetcode.com/problems/remove-element/
Description:
Given an integer array nums and an integer val, remove all occurrences of val in-place and return the number of remaining elements.
Approach:
This solution uses the two-pointer technique with in-place overwriting. A read pointer traverses the array, while a write pointer keeps track of where the next valid element should be placed. Elements equal to val are skipped, effectively compacting the array without extra space.
Complexity:
- Time: O(N)
- Space: O(1)
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
