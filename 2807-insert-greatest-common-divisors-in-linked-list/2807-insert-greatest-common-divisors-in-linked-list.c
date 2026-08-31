/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int gcd(int a1,int a2){
    int mini;
    if(a1>a2){
        mini=a2;
    }
    else{
        mini=a1;
    }
    for(int i=mini;i>1;i--){
        if(a1%i==0 && a2%i==0){
            return i;
        }
    }
    return 1;
 }
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        int gcdval=gcd(temp->val,temp->next->val);
        struct ListNode* newnode;
        newnode=malloc(sizeof(struct ListNode));
        newnode->val=gcdval;
        newnode->next=temp->next;
        temp->next=newnode;
        temp=newnode->next;
    }
    return head;
}