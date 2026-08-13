class Solution {
public:
    int maximumGap(vector<int>& nums) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      if(n==1){
        return 0;
      } 
      int diff=nums[1]-nums[0];
      for(int i=1;i<n;i++){
        diff=max(diff,(nums[i]-nums[i-1]));
      }
      return diff;
    }
};