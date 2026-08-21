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
      //brute force solution for the problem first we can reverse both the linked list and then add up  and then also reverse the given 
      //we can create the reverse function for these also 
      ListNode* temp1=l1;
      ListNode* temp2=l2;
      stack<int> st1,st2;
      while(temp1!=NULL || temp2!=NULL){
        if(temp1){
            st1.push(temp1->val);
            temp1=temp1->next;
        }
        if(temp2){
            st2.push(temp2->val);
            temp2=temp2->next;
        }
      }
      temp1=l1;
      temp2=l2;
      while(temp1!=NULL || temp2!=NULL){
         if(temp1){
            temp1->val=st1.top();
            st1.pop();
            temp1=temp1->next;
        }
        if(temp2){
            temp2->val=st2.top();
            st2.pop();
            temp2=temp2->next;
        }
      }
      int carry=0;
      temp1=l1;
      temp2=l2;
      ListNode* ans=new ListNode(10);
      ListNode* curr2=ans;
      while(temp1!=NULL || temp2!=NULL || carry !=0){
        int sum=(((temp1)?temp1->val:0)+((temp2)?temp2->val:0)+carry);
        ListNode* curr=new ListNode(sum%10);
        curr2->next=curr;
        curr2=curr2->next;
        if(temp1){
            temp1=temp1->next;
        }
        if(temp2){
            temp2=temp2->next;
        }
        carry=sum/10;
      }
      ans=ans->next;
      temp1=ans;
      stack<int> st3;
      while(temp1!=NULL){
        st3.push(temp1->val);
        temp1=temp1->next;
      }
      temp1=ans;
      while(temp1!=NULL){
        temp1->val=st3.top();
        st3.pop();
        temp1=temp1->next;
      }
      return ans;
    }
};