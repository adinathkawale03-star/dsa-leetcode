class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        int sum1=((l)*(l+1))/2;
        int sum2=0;
        for(int i=0;i<l;i++){
            sum2+=nums[i];
        }
        if(sum1==sum2){return 0;}
        return sum1-sum2;
    }
};