/*
Problem: Two Sum II - Input Array Is Sorted
Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Desccription:
Find two numbers in a sorted array whose sum equals the target and return their 1-based indices.
Approach:
Uses two pointers starting from both ends of the sorted array. If the current sum is smaller than the target, move the left pointer to increase the sum; if larger, move the right pointer to decrease it. Continue until the target sum is found.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right) {
            int sum = numbers[left] + numbers[right];

            if(sum == target) {
                return {left + 1, right + 1};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};
