/*
Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
*/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode* temp=head;
        struct ListNode* temp1=head;
        for(int i=0;i<n;i++)
            temp1=temp1->next;
        if(temp1==NULL)
        {
            head=head->next;
            return head;
        }    
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        return head;
    }
};
