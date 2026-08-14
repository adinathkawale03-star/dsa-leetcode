class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //brute force solution for these problem
        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int targetIndex = cnt - n;
        ListNode* temp2 = head;
        int cnt2 = 1;

        while (cnt2 < targetIndex) {
            cnt2++;
            temp2 = temp2->next;
        }
        ListNode* nodeToDelete = temp2->next;
        temp2->next = temp2->next->next;
        delete nodeToDelete;

        return head;
    }
};