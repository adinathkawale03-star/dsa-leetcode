/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int cnt=0;
    struct ListNode* dummy=malloc(sizeof(struct ListNode));
    dummy->val=100;
    dummy->next=NULL;
    struct ListNode* ans=dummy;
    while(l1!=NULL || l2!=NULL || cnt!=0){
        int sum=((l1)?l1->val:0)+((l2)?(l2->val):0)+cnt;
        ans->next=malloc(sizeof(struct ListNode));
        ans->next->val=sum%10;
        ans=ans->next;
        ans->next=NULL;
        cnt=sum/10;
        if(l1){l1=l1->next;}
        if(l2){l2=l2->next;}
    } 
    return dummy->next;
}