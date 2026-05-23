/*
Problem: Count Pairs Whose Sum is Less than Target
Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
Description:
Count the number of index pairs whose sum is less than the given target.
Approach:
Uses nested loops to check every unique pair in the array and increments the count whenever the pair sum is less than the target.
Complexity:
- Time: O(N²)
- Space: O(1)
*/

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] < target) {
                    count++;
                }
            }
        }

        return count;
    }
};
