class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int ans=0;
     int maxi=nums[0];
     for(int i:nums){
        ans+=i;
        maxi=max(ans,maxi);
        if(ans<0){
            ans=0;
        }
     }
     return maxi;
    }
};
//tc:o(n)
//sc:o(1)