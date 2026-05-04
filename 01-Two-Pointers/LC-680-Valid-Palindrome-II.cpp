/*
Problem: Valid Palindrome II (LC 680)
Link: https://leetcode.com/problems/valid-palindrome-ii/
Description: 
Given a string s, return true if the s can be palindrome after deleting at most one character from it.
Approach (What & Why):
- What: We used the Convergent Two Pointers strategy with a helper function `isPal`. When a mismatch is found at s[left] and s[right], we check if the remaining substring is a 
  palindrome by skipping either the left character or the right character.
- Why: Since we are allowed one deletion, a mismatch gives us two choices: skip s[left] or skip s[right]. If either resulting path forms a palindrome, the original condition is satisfied. 
  This avoids nested loops and keeps the logic linear.
Complexity:
- Time Complexity: O(N) — In the worst case, we scan the string once, and if a mismatch occurs, we scan the remaining part once more.
- Space Complexity: O(1) — No extra data structures are used; only pointer variables and recursion-like logic within the same memory space.
*/

class Solution {
private:
    bool isPal(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while(left < right){
            if(s[left] != s[right]){
                // Try deleting the left character OR the right character
                return isPal(s, left + 1, right) || isPal(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};
