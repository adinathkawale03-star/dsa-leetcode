struct ListNode* reverseList(struct ListNode* head) {
    if(!head || !head->next){
        return head;
    }
    struct ListNode* ans;
    ans=malloc(sizeof(struct ListNode));
    struct ListNode* temp=head;
    ans->val=temp->val;
    temp=temp->next;
    ans->next=NULL;
    while(temp!=NULL){
        struct ListNode* newnode;
        newnode=malloc(sizeof(struct ListNode));
        newnode->val=temp->val;
        newnode->next=ans;
        ans=newnode;
        temp=temp->next;
    }
    return ans;
}