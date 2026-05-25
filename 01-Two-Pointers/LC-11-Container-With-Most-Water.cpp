/*
Problem: Container With Most Water
Link: https://leetcode.com/problems/container-with-most-water/
Description:
Find two lines that together form a container holding the maximum amount of water.
Approach:
Uses two pointers starting from both ends of the array. The water area is determined by the smaller height multiplied by the width between pointers. To maximize area, the pointer at the smaller height is moved inward, since moving the taller one cannot increase the container height.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while(left < right) {
            int width = right - left;
            int currArea = min(height[left], height[right]) * width;

            maxWater = max(maxWater, currArea);

            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
