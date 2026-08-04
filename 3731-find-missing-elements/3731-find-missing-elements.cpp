class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int first=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>first){
                for(int j=first+1;j<nums[i];j++){
                    ans.push_back(j);
                }
            }
            first=nums[i];
        }
        return ans;
    }
};