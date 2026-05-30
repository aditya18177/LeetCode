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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode* temp=head;
        unordered_map<ListNode*,int> frq;
        while(temp){
            if(frq.find(temp)!=frq.end()) return true;
            frq[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};