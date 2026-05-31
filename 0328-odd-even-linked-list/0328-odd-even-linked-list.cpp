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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* even_head=head->next;
        ListNode* odd_head=head;
        ListNode* odd_tail=head;
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        while(temp1->next && temp2->next){
            temp1->next=temp2->next;
            temp1=temp1->next;
            temp2->next=temp1->next;
            temp2=temp2->next;
            odd_tail=temp1;
        }
        odd_tail->next=even_head;
        return odd_head;
    }
};