/*
Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
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
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* prev = NULL;
        ListNode* temp = head;
        
        while(temp!=NULL)
        {
            if(temp->val == val)
            {
                if(prev == NULL)
                {
                    head = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
            }
            else
            {
                prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
