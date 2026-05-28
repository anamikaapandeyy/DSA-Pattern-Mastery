/*
Problem: Reverse Words in a String
Link: https://leetcode.com/problems/reverse-words-in-a-string/
Desciption:
Reverse the order of words while removing extra spaces.
Approach:
First trims and normalizes spaces using two pointers, then reverses the entire string and finally reverses each individual word to restore word order correctly.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:

    void reverseString(string &s, int left, int right) {
        while(left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    string reverseWords(string s) {

        int n = s.size();
        int i = 0, j = 0;

        while(j < n) {

            while(j < n && s[j] == ' ')
                j++;

            while(j < n && s[j] != ' ') {
                s[i++] = s[j++];
            }

            while(j < n && s[j] == ' ')
                j++;

            if(j < n)
                s[i++] = ' ';
        }

        s.resize(i);

        reverseString(s, 0, s.size() - 1);

        int start = 0;

        for(int end = 0; end <= s.size(); end++) {

            if(end == s.size() || s[end] == ' ') {

                reverseString(s, start, end - 1);

                start = end + 1;
            }
        }

        return s;
    }
};
