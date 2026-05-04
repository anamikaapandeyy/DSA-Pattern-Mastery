/*
Problem: Squares of a Sorted Array (LC 977)
Link: https://leetcode.com/problems/squares-of-a-sorted-array/
Description: 
Given an integer array 'nums' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Approach (What & Why):
- What: We initialized two pointers at the ends of the array (left at 0, right at n-1) and filled a new 'result' vector from back to front (largest to smallest).
- Why: While the original array is sorted, squaring negative numbers can make them larger than the squares of positive numbers. Since the largest possible squares must exist at either the 
  far left or far right, we compare these two extremes and place the larger square in the highest available index of our result array.
Complexity:
- Time Complexity: O(N) — We perform a single pass through the array using two pointers.
- Space Complexity: O(N) — Required to store the resulting squared and sorted array.
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int pos = n - 1;
         
        while (left <= right) {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];
            
            if (leftsq > rightsq) {
                result[pos] = leftsq;
                left++;
            } else {
                result[pos] = rightsq;
                right--;
            }
            pos--;
        }
        return result;
    }
};
