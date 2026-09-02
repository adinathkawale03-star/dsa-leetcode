/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(!head || !head->next){
        return NULL;
    }
    int len=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    int a=len-n;
    if(a==0){
        return head->next;
    }
    temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==a){
            temp->next=temp->next->next;
            return head;
        }
        temp=temp->next;
    }
    return head;

}