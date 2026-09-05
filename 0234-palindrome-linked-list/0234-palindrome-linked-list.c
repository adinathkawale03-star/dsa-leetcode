/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(!head || !head->next){
        return true;
    }
    int l=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    int* val=(int*)malloc(l*sizeof(int));
    temp=head;
    int cnt=0;
    while(cnt!=l){
        val[cnt]=temp->val;
        cnt++;
        temp=temp->next;
    }
    for(int i=0;i<l/2;i++){
        if(val[i]!=val[l-i-1]){
            return false;
        }
    }
    return true;
}