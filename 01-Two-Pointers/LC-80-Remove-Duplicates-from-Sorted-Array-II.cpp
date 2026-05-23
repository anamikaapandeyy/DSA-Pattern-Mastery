/*
Problem: Remove Duplicates from Sorted Array II
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
Description:
Remove duplicates in-place such that each unique element appears at most twice.
Approach:
Uses two pointers where the write pointer places valid elements while the read pointer scans the array. Since the array is sorted, comparing with the element two positions back ensures no element appears more than twice.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2)
          return nums.size();
        int i = 2;
        for(int j = 2; j < nums.size(); j++) {
            if(nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
