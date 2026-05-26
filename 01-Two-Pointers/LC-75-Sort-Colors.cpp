/*
Problem: Sort Colors
Link: https://leetcode.com/problems/sort-colors/
Description:
Sort the array containing only 0s, 1s, and 2s in-place.
Approach:
Uses the Dutch National Flag algorithm with three pointers. The low pointer places 0s at the beginning, the high pointer places 2s at the end, and the mid pointer scans the array, placing each element in its correct region.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
