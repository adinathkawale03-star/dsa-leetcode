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
    ListNode* find(ListNode* t,int k){
        int cnt=1;
        ListNode* temp=t;
        while(temp!=NULL){
            if(cnt==k){
                return temp;
            }
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0){
            return head;
        }
        int len=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        if(k%len==0){return head;}
        k=k%len;
        temp->next=head;
        ListNode* newnode=find(head,len-k);
        head=newnode->next;
        newnode->next=nullptr;
        return head;
    }
};