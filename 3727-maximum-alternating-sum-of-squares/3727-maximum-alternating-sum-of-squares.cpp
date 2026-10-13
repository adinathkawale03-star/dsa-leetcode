class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            nums[i]=(-1)*nums[i];
        }
       }
       sort(nums.begin(),nums.end());
       long long ans=0;
       int n=nums.size();
       for(int i=0;i<n/2;i++){
        ans+=(pow(nums[n-i-1],2)-pow(nums[i],2));
       }
       if(n%2!=0){
         ans+=pow(nums[n/2],2);
       }
       return ans;
    }
};