/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(k==0 || !head || !head->next){return head;}
    int l=1;
    struct ListNode* temp=head;
    while(temp->next!=NULL){
        l++;
        temp=temp->next;
    }
    struct ListNode* old=temp;
    k=k%l;
    if(k==0){return head;}
    int cnt=0;
    temp=head;
    struct ListNode* newnode=NULL;
    while(temp!=NULL && temp->next!=NULL){
        cnt++;
        if(cnt==l-k){
            newnode=temp->next;
            temp->next=NULL;
            break;
        }
        temp=temp->next;
    }
    old->next=head;
    return newnode;
}