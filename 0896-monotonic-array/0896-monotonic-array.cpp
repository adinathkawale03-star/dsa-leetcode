class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
        for(int i=0;i<n-1;i++){
            if(nums[0]>nums[n-1]){
                if(nums[i+1]>nums[i])return false;
            }
            else{
                if(nums[i+1]<nums[i])return false;
            }
        }
        return true;
    }
};