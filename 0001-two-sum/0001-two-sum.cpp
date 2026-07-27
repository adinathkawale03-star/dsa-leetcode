class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> a;
      int req;
      for(int i=0;i<nums.size();i++){
        req=target-nums[i];
        if(a.find(req)!=a.end()){
            return {a[req],i};
        }
        a[nums[i]]=i;
      }
      return {-1,-1};
    }
};