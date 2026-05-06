/*
Problem: Merge Sorted Array (LC 88)
Link: https://leetcode.com/problems/merge-sorted-array/
Description: 
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. Merge nums2 into nums1 as one sorted array. nums1 has a total length of m + n to accommodate the merged elements.
Approach (What & Why):
- What: We used three pointers: p1 at the end of valid elements in nums1 (m-1), p2 at the end of nums2 (n-1), and p at the very end of the nums1 capacity (m+n-1). We compared elements from both arrays starting from the back and placed the larger one at index p.
- Why: Merging from the front would require shifting elements in nums1, which is slow (O(n^2)). By merging from the back (right-to-left), we utilize the empty space at the end of nums1 and avoid overwriting any elements we haven't compared yet.
Complexity:
- Time Complexity: O(m + n) — We traverse each element in both arrays exactly once.
- Space Complexity: O(1) — The merge happens in-place within the existing capacity of nums1.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;    
        int p2 = n - 1;    
        int p = m + n - 1;  

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p--;
            p2--;
        }
    }
};
