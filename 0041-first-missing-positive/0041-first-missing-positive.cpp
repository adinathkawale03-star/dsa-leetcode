class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     //brute force solution for these problem 
      sort(nums.begin(),nums.end());
      int cnt=1;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==cnt){
            cnt++;
        }
      }
      return cnt;
    }
};