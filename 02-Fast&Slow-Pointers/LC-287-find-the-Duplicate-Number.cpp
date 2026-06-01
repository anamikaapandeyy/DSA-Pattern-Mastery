/*
Problem: Find the Duplicate Number
Link: https://leetcode.com/problems/find-the-duplicate-number/
Description:
Find the duplicate number without modifying the array and using constant extra space.
Approach:
Treat the array as a linked list where each value points to the next index. Use Floyd's Cycle Detection Algorithm to find the meeting point, then locate the cycle entrance, which represents the duplicate number.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow != fast);

        slow = nums[0];

        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
