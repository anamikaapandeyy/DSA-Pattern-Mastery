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
/*
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
*/



/*
Problem: Count Pairs Whose Sum is Less than Target
Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
Description:
Count the number of index pairs whose sum is less than the given target.
Approach:
Uses sorting with two pointers. If the current pair sum is less than target,all elements between the pointers form valid pairs with the left element,allowing multiple counts at once.
Complexity:
- Time: O(N log N)
- Space: O(1)
*/

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;
        int count = 0;

        while(left < right) {
            if(nums[left] + nums[right] < target) {
                count += (right - left);
                left++;
            }
            else {
                right--;
            }
        }

        return count;
    }
};
