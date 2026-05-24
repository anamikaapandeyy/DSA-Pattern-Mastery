/*
Problem: Majority Element
Link: https://leetcode.com/problems/majority-element/
Description:
Find the element that appears more than n/2 times in the array.
Approach:
Uses Boyer-Moore Voting Algorithm where elements cancel each other out.Since the majority element appears more than half the time, it remains as the final candidate.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for(int num : nums) {
            if(count == 0)
                candidate = num;

            if(num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};
