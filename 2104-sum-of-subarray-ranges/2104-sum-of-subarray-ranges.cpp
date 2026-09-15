class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return (long long)0;
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            long long mini=nums[i];
            long long maxi=nums[i];
            for(int j=i+1;j<n;j++){
                mini=min(mini,(long long) nums[j]);
                maxi=max(maxi,(long long) nums[j]);
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};