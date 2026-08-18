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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head || !head->next){
            return head;
        }
        int cnt1=0;
        int cnt=0;
        ListNode* dummy=nullptr;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt1++;
            cnt++;
            if(cnt1==k){
                dummy=temp;
            }
            temp=temp->next;
        }
        cnt=cnt-k+1;
        temp=head;
        while(temp!=NULL){
            cnt--;
            if(cnt==0){
                break;
            }
            temp=temp->next;
        }
        swap(temp->val,dummy->val);
        return head;

    }
};