/*
Problem: Reverse String (LC 344)
Link: https://leetcode.com/problems/reverse-string/
Description: 
Write a function that reverses a string. The input string is given as an array of characters 's'.The modification must be done in-place with O(1) extra memory.
Approach (What & Why):
- What: Utilized the Convergent Two Pointers strategy by placing one pointer at the start (0) and another at the end (n-1) of the character array.
- Why: By swapping the characters at these two pointers and moving them toward each other, we reverse the string "in-place." This avoids the need for a temporary string, which is the most memory-efficient way to solve the problem.
Complexity:
- Time Complexity: O(n) — We traverse half the array, resulting in linear time.
- Space Complexity: O(1) — No extra data structures are used; only two pointer variables.
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            swap(s[start++],s[end--]);
        }

    }
};
