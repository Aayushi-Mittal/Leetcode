/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode *p1=l1, *p2=l2, *p3=head;
        int carry=0;
        while(p1!=NULL && p2!=NULL)
        {
            int value=p1->val + p2->val + carry;
            
            if(value>9) carry=1;
            else carry=0;
            
            p3->next = new ListNode(value%10);
           
            p3=p3->next;
            p1=p1->next;
            p2=p2->next;
        }
        while(p1!=NULL)
        {
            int value=p1->val + carry;
            p3->next = new ListNode(value%10);
            if(value>9) carry=1;
            else carry=0;
            p3=p3->next;
            p1=p1->next;
        }
        while(p2!=NULL)
        {
            int value=p2->val + carry;
            p3->next = new ListNode(value%10);
            if(value>9) carry=1;
            else carry=0;
            p3=p3->next;
            p2=p2->next;
        }
        if(carry==1)
            p3->next = new ListNode(1);
        return head->next;
    }
};