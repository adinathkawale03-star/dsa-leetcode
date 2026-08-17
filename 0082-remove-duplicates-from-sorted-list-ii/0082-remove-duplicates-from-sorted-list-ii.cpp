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
        while(temp!=NULL){
            a[temp->val]++;
            temp=temp->next;
        }
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        temp = head;

        while (temp != nullptr) {
            if (a[temp->val] > 1) {
                prev->next = temp->next;
            } else {
                prev = temp;
            }
            temp = temp->next;
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};