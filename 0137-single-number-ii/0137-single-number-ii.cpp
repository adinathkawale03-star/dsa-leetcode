class Solution {
public:
    int singleNumber(vector<int>& nums) {
      //better approch 1 solution for the given problem 
      int n=nums.size();
      int ans=0;
      for(int i=0;i<32;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j] & (1<<i)){
                cnt++;
            }
        }
        if(cnt%3==1){
            ans=(ans|(1<<i));
        }
      }
      return ans;
    }
};