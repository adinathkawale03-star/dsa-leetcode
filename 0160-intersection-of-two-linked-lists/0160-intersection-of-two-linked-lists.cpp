/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* colla(ListNode* t1,ListNode* t2,int d){
        while(d>0 && t1!=NULL){
            d--;
            t1=t1->next;
        }
        while(t1!=NULL && t2!=NULL && t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        int n1=0,n2=0;
        while(t1!=NULL || t2!=NULL){
            if(t1){
                n1++;
                t1=t1->next;
            }
            if(t2){
                n2++;
                t2=t2->next;
            }
        }
        if(n1>n2){
            return colla(headA,headB,n1-n2);
        }
        return colla(headB,headA,n2-n1);
    }
};