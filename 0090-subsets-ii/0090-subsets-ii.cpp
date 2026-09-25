class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> a;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sub=(1<<n);
        for(int i=0;i<sub;i++){
            vector<int> help;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    help.push_back(nums[j]);
                }
            }
            a.insert(help);
        }
        vector<vector<int>> ans;
        for(auto it:a){
            ans.push_back(it);
        }
        return ans;
    }
};