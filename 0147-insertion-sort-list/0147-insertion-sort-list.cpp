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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        vector<int> temp2;
        ListNode* temp=head;
        while(temp!=NULL){
            temp2.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=1;i<temp2.size();i++){
            int j=i-1;
            int key=temp2[i];
            while(j>=0 && key<temp2[j]){
                temp2[j+1]=temp2[j];
                j--;
            }
            temp2[j+1]=key;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=temp2[i++];
            temp=temp->next;
        }
        return head;
    }
};