/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (!head || !head->next) return true;
    int len = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    int* val = (int*)malloc(len * sizeof(int));
    if (!val) return false;
    temp = head;
    for (int i = 0; i < len; i++) {
        val[i] = temp->val;
        temp = temp->next;
    }
    int left = 0, right = len - 1;
    bool isPalin = true;
    while (left < right) {
        if (val[left] != val[right]) {
            isPalin = false;
            break;
        }
        left++;
        right--;
    }
    free(val);
    return isPalin;
}