/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    int len=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    int* val=malloc(len * sizeof(sizeof(int)));
    int i=0;
    temp=head;
    while(temp!=NULL){
        val[i]=temp->val;
        i++;
        temp=temp->next;
    }
    int maxi=val[0]+val[len-1];
    for(int i=0;i<len/2;i++){
        if(maxi<(val[i]+val[len-i-1])){
            maxi=val[i]+val[len-i-1];
        }
    }
    return maxi;
}