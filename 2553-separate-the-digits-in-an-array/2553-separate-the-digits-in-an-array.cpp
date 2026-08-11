class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                ans.push_back(nums[i]);
                continue;
            }
            string s=to_string(nums[i]);
            int x=s.size();
            for(int i=0;i<x;i++){
                ans.push_back((s[i]-'0'));
            }
        }
        return ans;
    }
};