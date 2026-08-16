class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, bool> mp;
        for (int num : nums) {
            mp[num] = true;
        }
        ListNode* dummy = new ListNode(-1, head);
        ListNode* temp = dummy;
        
        while (temp->next != nullptr) {
            if (mp.count(temp->next->val)) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        
        return dummy->next;
    }
};