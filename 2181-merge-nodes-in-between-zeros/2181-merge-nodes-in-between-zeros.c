/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* temp=head;
    struct ListNode* ans=malloc(sizeof(struct ListNode));
    ans->val=head->next->val;
    ans->next=NULL;
    temp=temp->next;
    int cnt=0;
    struct ListNode* ans2=ans;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->val==0){
            struct ListNode* newnode=malloc(sizeof(struct ListNode));
            newnode->val=0;
            newnode->next=NULL;
            ans->next=newnode;
            ans=ans->next;
            cnt=0;
        }
        else{
            cnt+=temp->val;
            ans->val=cnt;
        }
        temp=temp->next;
    }
    return ans2;

}