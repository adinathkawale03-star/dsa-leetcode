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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l=0;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(10);
        dummy->next=head;
        ListNode* newnode=dummy;
        while(temp!=NULL){
            l++;
            if(l==k){
                ListNode* node2 = temp->next; 
                temp->next = NULL;           
                ListNode* temp2=newnode->next; 
                ListNode* node3=node2; 
                ListNode* node4=temp2;
                while (node4 != NULL) {
                    ListNode* nextNode = node4->next;
                    node4->next = node3;
                    node3 = node4;
                    node4 = nextNode;
                }
                newnode->next = node3;  
                newnode = temp2;      
                temp = node2;          
                l = 0;
            }
            else{
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};