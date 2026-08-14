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
    ListNode* deleteMiddle(ListNode* head) {
        //brute force solution for these problem 
         if(head==NULL || head->next==nullptr){
            return NULL;
         }
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
       ListNode* curr=head;
       for(int i=0;i<((cnt/2)-1);i++){
        curr=curr->next;
       }
       ListNode* todelete=curr->next;
       curr->next=curr->next->next;
       delete todelete;
       return head;
    }
};