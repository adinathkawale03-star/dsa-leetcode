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
       unordered_map<ListNode*,int> a;
       ListNode* temp=head;
       while(temp!=NULL){
        if(a.find(temp)!=a.end()){
            return true;
        }
        a[temp]=1;
        temp=temp->next;
       }
       return false;
    }

};