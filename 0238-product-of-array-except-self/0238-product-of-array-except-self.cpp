class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1=1;
        int n=nums.size();
        vector<int> ans(n,1);
        int p2=1;
        for(int i=0;i<n;i++){
            ans[i]=p1;//expect self it cannot be calculated for the self .
            p1*=nums[i];//till i products
        }
        for(int i=n-1;i>=0;i--){
            ans[i]*=p2;//after i elements product multiply with the before elements 
            p2*=nums[i];
        }
        return ans;
    }
};