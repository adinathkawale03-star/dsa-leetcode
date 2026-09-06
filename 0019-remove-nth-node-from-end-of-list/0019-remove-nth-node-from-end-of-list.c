/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(!head || !head->next){return NULL;}
    int l=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    l=l-n;
    n=0;
    temp=head;
    if(l==0){return head->next;}
    while(temp!=NULL){
        n++;
        if(l==n){
            temp->next=temp->next->next;
            return head;
        }
        temp=temp->next;
    }
    return head;
}