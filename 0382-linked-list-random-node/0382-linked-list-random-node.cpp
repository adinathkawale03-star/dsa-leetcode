/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* head;//decleared as the gloabally for use in the random also 
public:
    Solution(ListNode* head) {
        this->head = head;
    }
    int getRandom() {
        int result = head->val;
        ListNode* newnode = head;
        int i = 1;
        while (newnode != nullptr) {
            if (rand() % i == 0) {//take the radom function and get the random number 
                result = newnode->val;
            }
            newnode = newnode->next;
            i++;
        }
        return result;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */