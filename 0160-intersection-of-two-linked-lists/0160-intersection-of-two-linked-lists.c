/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int l1=0,l2=0;
    struct ListNode* temp1=headA;
    struct ListNode* temp2=headB;
    while(temp1!=NULL){l1++;temp1=temp1->next;}
    while(temp2!=NULL){l2++;temp2=temp2->next;}
    if(l1==0 || l2==0){return NULL;}
    while(l1!=l2){
       if(l1>l2){
        l1--;
        headA=headA->next;
       }
       else{
        l2--;
        headB=headB->next;
       }
    }
    temp1=headA;
    temp2=headB;
    while(temp1!=NULL){
        if(temp1==temp2){return temp1;}
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
}