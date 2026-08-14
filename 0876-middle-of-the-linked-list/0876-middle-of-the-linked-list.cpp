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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        ListNode* newnode=head;
        int k=cnt/2;
        int cnt2=0;
        while(newnode!=NULL){
            cnt2++;
            if(k+1==cnt2){
                head=newnode;
                return head;
            }
            newnode=newnode->next;
        }
        return head;
    }
};