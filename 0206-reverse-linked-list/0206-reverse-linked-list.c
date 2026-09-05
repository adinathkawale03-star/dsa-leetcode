struct ListNode* reverseList(struct ListNode* head) {
   if(!head || !head->next){return head;}
   struct ListNode* temp=malloc(sizeof(struct ListNode));
   temp->val=head->val;
   temp->next=NULL;
   head=head->next;
   struct ListNode* temp2=temp;
   struct ListNode* temp3=head;
   while(temp3!=NULL){
    struct ListNode* newnode=malloc(sizeof(struct ListNode));
    newnode->val=temp3->val;
    newnode->next=temp;
    temp=newnode;
    temp3=temp3->next;
   }
   return temp;
}