class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> an(nums.begin(), nums.end());
        int mul = k;
        while (an.count(mul)) {
            mul += k;
        }
        return mul;
    }
};