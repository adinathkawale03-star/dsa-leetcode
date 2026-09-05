/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    if(!head || !head->next){
        return head;
    }
    int l=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    } 
    l=(l/2)+1;
    int cnt=0;
    temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==l){return temp;}
        temp=temp->next;
    }
    return head;
}