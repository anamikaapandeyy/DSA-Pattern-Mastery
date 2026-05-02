/*
Problem: Valid Palindrome
link:https://leetcode.com/problems/valid-palindrome/
Description:A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Approach:This approach focuses on memory efficiency by performing filtering and normalization "on the fly" instead of creating a secondary string. By using `isalnum()`, the program can dynamically skip over spaces or punctuation, and `tolower()` ensures that case sensitivity does not interfere with the comparison.
The process begins with pointer initialization, where a `left` pointer is placed at the very start of the string (index 0) and a `right` pointer is set at the final character (`s.length() - 1`). During the convergent iteration, these pointers move toward each other within a `while (left < right)` loop. Character comparisons are only executed once both pointers have landed on valid alphanumeric symbols.
Complexity:
- Time: O(N)
- Space: O(1)
*/
class Solution {
public:
    bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        } 
        else if (!isalnum(s[right])) {
            right--;
        } 
        else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
}
};
