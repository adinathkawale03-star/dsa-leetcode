struct ListNode* reverseList(struct ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    struct ListNode *temp = malloc(sizeof(struct ListNode));
    temp->val = head->val;
    temp->next = NULL; 

    struct ListNode *ans = temp;
    struct ListNode *temp2 = head->next;

    while (temp2 != NULL) {
        struct ListNode *newnode = malloc(sizeof(struct ListNode));
        newnode->val = temp2->val;
        newnode->next = ans;
        ans = newnode;
        temp2 = temp2->next;
    }

    return ans;
}