/*
Problem: Trapping Rain Water
Link: https://leetcode.com/problems/trapping-rain-water/
Description:
Find the total amount of rain water trapped between elevation bars.
Approach:
Uses two pointers with leftMax and rightMax boundaries. The side with the smaller boundary determines the trapped water, since water level depends on the minimum of both sides. Move pointers inward while accumulating trapped water.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while(left < right) {

            if(height[left] < height[right]) {

                if(height[left] >= leftMax) {
                    leftMax = height[left];
                }
                else {
                    water += leftMax - height[left];
                }

                left++;
            }

            else {

                if(height[right] >= rightMax) {
                    rightMax = height[right];
                }
                else {
                    water += rightMax - height[right];
                }

                right--;
            }
        }

        return water;
    }
};
