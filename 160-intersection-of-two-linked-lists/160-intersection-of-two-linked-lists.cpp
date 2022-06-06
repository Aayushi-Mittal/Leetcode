/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA=headA, *tempB=headB;
        while(tempA != tempB) {
            if (tempA == NULL)
                tempA = headB;
            else if (tempB == NULL)
                tempB = headA;
            else {
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        return tempA;
    }
};