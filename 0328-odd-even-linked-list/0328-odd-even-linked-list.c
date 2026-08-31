/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head || !head->next || !head->next->next){
        return head;
    }
    struct ListNode* even;
    even=malloc(sizeof(struct ListNode));
    even->val=head->next->val;
    even->next=NULL;
    struct ListNode* evenr=even;
    struct ListNode* odd;
    odd=malloc(sizeof(struct ListNode));
    odd->val=head->val;
    odd->next=NULL;
    struct ListNode* oddr=odd;
    struct ListNode* temp=head;
    temp=temp->next->next;
    int index=3;
    while(temp!=NULL){
        struct ListNode* newnode = malloc(sizeof(struct ListNode));
        newnode->val = temp->val;
        newnode->next = NULL;
        if(index%2 == 0){
            even->next=newnode;
            even=even->next;
            temp=temp->next;
            index++;
        }
        else{
            odd->next=newnode;
            odd=odd->next;
            temp=temp->next;
            index++;
        }
    }
    odd->next=evenr;
    return oddr;
}