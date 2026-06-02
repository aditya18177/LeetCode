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
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        int carry=0;
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        while(temp1 && temp2){
            int x=temp1->val+temp2->val+carry;
            if(x>9){
                carry=1;
                x=x%10;
            }else carry=0;
            ListNode* newnode=new ListNode(x);
            curr->next=newnode;
            curr=curr->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1){
            if(carry==0){
                curr->next=temp1;
            }else{
                while(temp1 && carry!=0){
                    temp1->val+=carry;
                    if(temp1->val>9){
                        temp1->val%=10;
                        carry=1;
                    }else{
                        carry=0;
                    }
                    curr->next=temp1;
                    curr=curr->next;
                    temp1=temp1->next;
                }
            }
        }else{
            if(carry==0){
                curr->next=temp2;
            }else{
                while(temp2 && carry!=0){
                    temp2->val+=carry;
                    if(temp2->val>9){
                        temp2->val%=10;
                        carry=1;
                    }else{
                        carry=0;
                    }
                    curr->next=temp2;
                    curr=curr->next;
                    temp2=temp2->next;
                }
            }
        }
        if(carry==1){
            ListNode* newnode=new ListNode(1);
            curr->next=newnode;
        }
        return dummy->next;
    }
};