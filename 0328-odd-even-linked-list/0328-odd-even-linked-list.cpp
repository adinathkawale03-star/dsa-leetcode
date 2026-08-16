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
    ListNode* oddEvenList(ListNode* head) {
        //brute force solution for these problem
        if(head==NULL || head->next==nullptr || head->next->next==nullptr){
            return head;
        }
        vector<int> nums;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            nums.push_back(temp->val);
        }
        temp=head->next;
        while(temp!=NULL && temp->next!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            nums.push_back(temp->val);
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=nums[i];
            i++;
            temp=temp->next;
        }
        return head;
        
    }
};