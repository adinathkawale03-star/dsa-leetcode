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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int len=0;
        ListNode* temp=list1;
        ListNode* prev=temp;
        while(temp!=NULL){
            if(len==a){
                break;
            }
            prev=temp;
            len++;
            temp=temp->next;
        }
        ListNode* front=temp;
        while(temp!=NULL){
            if(len==b+1){
                break;
            }
            front=temp;
            len++;
            temp=temp->next;
        }
        front->next=nullptr;
        prev->next=list2;
        ListNode* temp2=list2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
        return list1;
    }
};