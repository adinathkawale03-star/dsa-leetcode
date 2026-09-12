class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    if(nums.size()<4){return {};}
      vector<vector<int>> ans;
      sort(nums.begin(),nums.end());
      int n=nums.size();
      for(int i=0;i<(n-3);i++){
        if(i>0 && nums[i-1]==nums[i]){
            continue;
        }
        for(int j=i+1;j<n-2;j++){
            if(((j)>i+1) && nums[j]==nums[j-1]){
                continue;
            }
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    while(k<l && nums[k-1]==nums[k]){
                        k++;
                    }
                    while(k<l && nums[l+1]==nums[l]){
                        l--;
                    }
                }
            }
        }
      }
      return ans;
    }
};