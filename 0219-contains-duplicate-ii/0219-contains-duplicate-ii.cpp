class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> ans; 
        for (int i = 0; i < nums.size(); i++) {
            if ((ans.count(nums[i])) && ((i - ans[nums[i]]) <= k)) {
                return true;
            }
            ans[nums[i]] = i;
        }
        return false;
        //tc : o(n)
        //sc : o(n)
        //in these problem we can value and the index previous and detect correct condition required if true then return true else continue till the traversal whole array after that returen false
    }
};