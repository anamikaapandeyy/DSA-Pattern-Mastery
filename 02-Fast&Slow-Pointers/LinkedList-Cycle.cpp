/*
Problem: Linked List Cycle
Link: https://leetcode.com/problems/linked-list-cycle/
Description:
Determine whether a linked list contains a cycle.
Approach:
Uses Floyd's Cycle Detection Algorithm (Fast & Slow Pointers). The slow pointer moves one step at a time while the fast pointer moves two steps. If a cycle exists, both pointers will eventually meet; otherwise, the fast pointer reaches the end of the list.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }
        }

        return false;
    }
};
