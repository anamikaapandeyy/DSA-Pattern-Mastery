/*
Problem: Middle of the Linked List
Link: https://leetcode.com/problems/middle-of-the-linked-list/
Description:
Return the middle node of a singly linked list. If there are two middle nodes, return the second middle node.
Approach:
Uses Fast & Slow Pointers. The slow pointer moves one step at a time while the fast pointer moves two steps. When the fast pointer reaches the end of the list, the slow pointer will be at the middle node.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
