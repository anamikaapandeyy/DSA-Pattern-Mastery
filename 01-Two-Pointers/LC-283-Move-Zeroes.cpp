/*
Problem: Move Zeroes
Link: https://leetcode.com/problems/move-zeroes/
Description:
Move all zeroes to the end while maintaining the relative order of non-zero elements.
Approach:
Uses two pointers where one pointer scans the array and the other tracks the position for the next non-zero element. Non-zero values are swapped forward, pushing zeroes toward the end.
Complexity:
- Time: O(N)
- Space: O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size();i++){
            if (nums[i]!=0){
                swap (nums[i], nums[j]);
                j++;
            }
        }
    }
};
