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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* dummy=new ListNode(10);
      ListNode* curr=dummy;
      while(list1!=NULL && list2!=NULL){
        if(list1->val>list2->val){
            ListNode* newnode=new ListNode(list2->val);
            curr->next=newnode;
            curr=curr->next;
            list2=list2->next;
        }
        else if(list1->val<list2->val){
            ListNode* newnode=new ListNode(list1->val);
            curr->next=newnode;
            curr=curr->next;
            list1=list1->next;
        }
        else{
            ListNode* newnode1=new ListNode(list1->val);
            ListNode* newnode2=new ListNode(list2->val);
            curr->next=newnode1;
            curr->next->next=newnode2;
            curr=curr->next->next;
            list1=list1->next;
            list2=list2->next;
        }
      }
      while(list1!=NULL){
        ListNode* newnode=new ListNode(list1->val);
        curr->next=newnode;
        curr=curr->next;
        list1=list1->next;
      }
      while(list2!=NULL){
        ListNode* newnode=new ListNode(list2->val);
        curr->next=newnode;
        curr=curr->next;
        list2=list2->next;
      }
      return dummy->next;
    }
};