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
    ListNode* sortList(ListNode* head) {
        //brute force solution
        vector<int> help;
        ListNode* temp=head;
        while(temp!=NULL){
            help.push_back(temp->val);
            temp=temp->next;
        }
        sort(help.begin(),help.end());
        temp=head;
        int index=0;
        while(temp!=NULL){
            temp->val=help[index];
            temp=temp->next;
            index++;
        }
        return head;
    }
};
//tc:O(n+n+nlogn)==o(n+nlogn);
//sc:o(n);