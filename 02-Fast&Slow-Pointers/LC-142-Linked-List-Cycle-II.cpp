/*
Problem: Linked List Cycle II
Link: https://leetcode.com/problems/linked-list-cycle-ii/
Description:
Return the node where the cycle begins. If no cycle exists, return null.
Approach:
Uses Floyd's Cycle Detection Algorithm. First, detect whether a cycle exists using fast and slow pointers. Once they meet, move one pointer back to the head and advance both pointers one step at a time. Their next meeting point is the start of the cycle.
Complexity:
- Time: O(N)
- Space: O(1)
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {

                ListNode* entry = head;

                while(entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }

                return entry;
            }
        }

        return NULL;
    }
};
