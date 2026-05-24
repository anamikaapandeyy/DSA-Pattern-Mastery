/*
Problem: Is Subsequence
Link: https://leetcode.com/problems/is-subsequence/
Description:
Check whether string s is a subsequence of string t.
Approach:
Uses two pointers where one pointer traverses string s and the other scans string t. When matching characters are found, both pointers move forward; otherwise, only the pointer in t moves, effectively skipping unmatched characters.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while(i < s.length() && j < t.length()) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.length();
    }
};
