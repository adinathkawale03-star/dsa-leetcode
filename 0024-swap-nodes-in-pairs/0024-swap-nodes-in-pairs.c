/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (!head || !head->next) {
        return head;
    }
    struct ListNode* temp = head;
    struct ListNode* p = NULL;
    head = head->next;
    while (temp != NULL && temp->next != NULL) {
        struct ListNode* n = temp->next->next;
        struct ListNode* second = temp->next;
        second->next = temp;
        temp->next = n;
        if (p != NULL) {
            p->next = second;
        }
        p = temp;
        temp = n;
    }
    return head;
}