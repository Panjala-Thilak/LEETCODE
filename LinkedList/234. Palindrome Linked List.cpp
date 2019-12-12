/*
Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
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
    bool isPalindrome(ListNode* head) {
        struct ListNode* temp=head;
        stack<int> s;
        while(temp!=NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(s.top()==temp->val)
            {
                temp=temp->next;
                s.pop();
            }
            else
                break;
        }
        if(temp==NULL)
            return true;
        else
            return false; 
    }
};
