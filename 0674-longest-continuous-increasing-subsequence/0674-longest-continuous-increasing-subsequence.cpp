class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int maxcount=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                count++;
                maxcount=max(maxcount,count);
            }
            else{
                count=1;
            }
        }
        return maxcount;
    }
};