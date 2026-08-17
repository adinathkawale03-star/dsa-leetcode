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
    ListNode* deleteDuplicates(ListNode* head) {
      if(!head || !head->next){
        return head;
      }
      unordered_map<int,int> a;
      ListNode* temp=head;
      ListNode* prev=temp;
      while(temp!=NULL){
        if(a.count(temp->val)){
            prev->next=temp->next;
            temp=prev;
        }
        a[temp->val]++;
        prev=temp;
        temp=temp->next;
      }
      return head;
    }
};