/*
Problem: Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Description:
Remove duplicates from a sorted array in-place and return the count of unique elements.
Approach:
Uses two pointers where one scans the array and the other tracks the position of the last unique element. Since the array is sorted, duplicates appear consecutively, making comparison efficient.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int i = 0;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
