class Solution {
public:
    int singleNumber(vector<int>& nums) {
      //better approch 1 solution for the given problem 
      sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i+=3){
        if(nums[i-1]!=nums[i]){
            return nums[i-1];
        }
      }
      return nums[nums.size()-1];
    }
};