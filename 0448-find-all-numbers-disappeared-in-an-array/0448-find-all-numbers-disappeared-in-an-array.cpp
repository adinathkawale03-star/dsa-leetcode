class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //brute force solution for the problem:hashing
        int n=nums.size();
        vector<int> ans(n+1,0);
        vector<int> ans2;
        for(int i=0;i<n;i++){
            ans[nums[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==0){
                ans2.push_back(i);
            }
        }
        return ans2;
         
    }
};