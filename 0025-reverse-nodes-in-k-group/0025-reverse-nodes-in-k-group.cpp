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
    ListNode* knode(ListNode* temp,int j){
        for(int i=0;i<j-1;i++){
            if(temp==NULL) break;
            temp=temp->next;
        }
        return temp;
    }
    void reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp){
            ListNode* n=temp->next;
            temp->next=prev;
            prev=temp;
            temp=n;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* prevlast=NULL;
        while(temp){
            ListNode* kth=knode(temp,k);
            if(kth==NULL){
                if(prevlast){
                    prevlast->next=temp;
                    break;
                }
            }
            ListNode* nxt=kth->next;
            kth->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kth;
            }else{
                prevlast->next=kth;
            }
            prevlast=temp;
            temp=nxt;

        }
        return head;
    }
};