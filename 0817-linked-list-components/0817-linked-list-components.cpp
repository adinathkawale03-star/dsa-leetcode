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
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> a(nums.begin(), nums.end());
        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            if (a.count(temp->val) && (temp->next == nullptr || !a.count(temp->next->val))) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }
};