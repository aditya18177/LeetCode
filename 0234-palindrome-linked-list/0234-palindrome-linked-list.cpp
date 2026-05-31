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
    void reverse(ListNode* head,ListNode* tail){
        if(head==NULL || head->next==NULL) return;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=tail){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        temp->next=prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast){
            slow=slow->next;
        }
        reverse(head,prev);
        while(slow && prev){
            if(slow->val!=prev->val) return false;
            slow=slow->next;
            prev=prev->next;
        }
        return true;
    }
};