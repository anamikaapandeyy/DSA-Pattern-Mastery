/*
Problem: Shortest Unsorted Continuous Subarray
Link: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
Description:
Find the shortest subarray which, if sorted, makes the entire array sorted.
Approach:
Scans from left to right to track the maximum seen so far and from right to left to track the minimum seen so far. Any element violating sorted order updates the unsorted boundaries.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        int left = -1;
        int right = -2;   // handles already sorted case

        int maxSeen = nums[0];
        int minSeen = nums[n - 1];

        for(int i = 1; i < n; i++) {
            maxSeen = max(maxSeen, nums[i]);
            if(nums[i] < maxSeen) {
                right = i;
            }
        }

        for(int i = n - 2; i >= 0; i--) {
            minSeen = min(minSeen, nums[i]);
            if(nums[i] > minSeen) {
                left = i;
            }
        }

        return right - left + 1;
    }
};
