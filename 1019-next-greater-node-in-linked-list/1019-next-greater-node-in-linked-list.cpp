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
    vector<int> fnse(vector<int> nums){
        int n=nums.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            ans[i]=st.empty()?0:st.top();
            st.push(nums[i]);
        }
        return ans;
    }
public:
    vector<int> nextLargerNodes(ListNode* head) {
       vector<int> a;
       ListNode* temp=head;
       while(temp!=NULL){
        a.push_back(temp->val);
        temp=temp->next;
       }
       vector<int> nse=fnse(a);
       return nse;
    }
};
//tc:  O(n+n) + o(n) === o(3n)==o(n)
//sc:o(n)+o(n)+(n+n)==o(4n)