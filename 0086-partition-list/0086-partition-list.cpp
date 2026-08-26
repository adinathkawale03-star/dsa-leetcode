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
    ListNode* partition(ListNode* head, int x) {
        queue<int> q1;
        queue<int> q2;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                q1.push(temp->val);
            }
            else{
                q2.push(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(!q1.empty()){
                temp->val=q1.front();
                q1.pop();
            }
            else{
                temp->val=q2.front();
                q2.pop();
            }
            temp=temp->next;
        }
        return head;
    }
};//tc:o(n); o(n :sc)
//these is the data exchange pattern 
//one another pattern we can create the new linked list then store greater elements . in the orgfinally we can deleting greater