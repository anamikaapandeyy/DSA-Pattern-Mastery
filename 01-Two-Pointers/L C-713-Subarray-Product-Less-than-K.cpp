/*
Problem: Subarray Product Less Than K
Link: https://leetcode.com/problems/subarray-product-less-than-k/
Description:
Count the number of contiguous subarrays whose product is strictly less than k.
Approach:
Uses a sliding window with two pointers to maintain a valid subarray product less than k. If the product becomes invalid, the window is shrunk from the left until valid again. For each valid window, all subarrays ending at the current right pointer are counted.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;

        int left = 0;
        int product = 1;
        int count = 0;

        for(int right = 0; right < nums.size(); right++) {
            product *= nums[right];

            while(product >= k) {
                product /= nums[left];
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }
};
