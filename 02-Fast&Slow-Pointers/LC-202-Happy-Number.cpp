/*
Problem: Happy Number
Link: https://leetcode.com/problems/happy-number/
Description:
Determine whether a number is happy.
Approach:
Treat each number as a node and the sum of squares of its digits as the next node. Uses Floyd's Cycle Detection Algorithm (Fast & Slow Pointers). If the sequence reaches 1, the number is happy. If a cycle forms, it is not happy.
Complexity:
- Time: O(log N)
- Space: O(1)
*/

class Solution {
public:

    int getNext(int n) {
        int sum = 0;

        while(n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {

        int slow = n;
        int fast = n;

        do {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        while(slow != fast);

        return slow == 1;
    }
};
