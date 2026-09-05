struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val) {
        head = head->next;
    }
    if(!head){return NULL;}
   struct ListNode* temp=head;
   while( temp->next!=NULL){
        if(temp->next->val==val){
            temp->next=temp->next->next;
        }
        else{
           temp=temp->next;
        }
   }
   if(temp->val==val){temp->next==NULL;}
   return head;
}