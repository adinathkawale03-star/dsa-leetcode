/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* ans;
    ans=malloc(sizeof(struct ListNode));
    ans->val=100;
    ans->next=NULL;
    struct ListNode* ans2=ans;
    while(list1!=NULL && list2!=NULL){
        if(list1->val>list2->val){
            struct ListNode* newnode=malloc(sizeof(struct ListNode));
            newnode->val=list2->val;
            newnode->next=NULL;
            ans->next=newnode;
            ans=ans->next;
            list2=list2->next;
        }
        else{
            struct ListNode* newnode=malloc(sizeof(struct ListNode));
            newnode->val=list1->val;
            newnode->next=NULL;
            ans->next=newnode;
            ans=ans->next;
            list1=list1->next;
        }
    }
    while(list1!=NULL){
            struct ListNode* newnode=malloc(sizeof(struct ListNode));
            newnode->val=list1->val;
            newnode->next=NULL;
            ans->next=newnode;
            ans=ans->next;
            list1=list1->next;
    }
    while(list2!=NULL){
            struct ListNode* newnode=malloc(sizeof(struct ListNode));
            newnode->val=list2->val;
            newnode->next=NULL;
            ans->next=newnode;
            ans=ans->next;
            list2=list2->next;
    }
    return ans2->next;
}