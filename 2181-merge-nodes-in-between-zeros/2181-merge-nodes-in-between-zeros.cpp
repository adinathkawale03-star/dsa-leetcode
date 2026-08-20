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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=new ListNode(10);
        ListNode* ans2=ans;
        ListNode* temp=head->next;//because head and the tail of the linked list are always 0 so we can start with the 2nd element
        int cnt=0;
        while(temp!=NULL){
            if(temp->val==0){
                ListNode* newnode=new ListNode(cnt);
                ans2->next=newnode;
                ans2=ans2->next;
                cnt=0;
            }
            else{
               cnt+=temp->val;
            }
            temp=temp->next;
        }
        return ans->next;
    }
};