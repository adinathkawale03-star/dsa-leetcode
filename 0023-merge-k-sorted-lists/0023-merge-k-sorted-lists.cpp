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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //brute
       vector<int> ans;
       for(int i=0;i<lists.size();i++){
        ListNode* temp=lists[i];
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
       } 
       sort(ans.begin(),ans.end());
       ListNode* ans1=new ListNode(10);
       ListNode* ans2=ans1;
       for(int i=0;i<ans.size();i++){
         ListNode* newnode=new ListNode(ans[i]);
         ans2->next=newnode;
         ans2=ans2->next;
       }
       return ans1->next;
    }
};