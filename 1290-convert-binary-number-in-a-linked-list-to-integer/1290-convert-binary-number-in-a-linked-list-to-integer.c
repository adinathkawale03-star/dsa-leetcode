/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
  int l=0;
  struct ListNode* temp=head;
  while(temp!=NULL){
    l++;
    temp=temp->next;
  }  
  int* val=malloc(l*sizeof(int));
  temp=head;
  int c=0;
  while(temp!=NULL){
    val[c]=temp->val;
    c++;
    temp=temp->next;
  }
  c--;
  int ans=0;
  for(int i=0;i<l;i++){
    if(val[i]==1){
      ans+=pow(2,c);
    }
    c--;
  }
  return ans;
}