class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int n=nums.size();
       int close=nums[0]+nums[1]+nums[2];
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
        if(i>0 && nums[i-1]==nums[i]){continue;}
        int low=i+1;
        int high=n-1;
        while(low<high){
            int sum=nums[i]+nums[low]+nums[high];
            if(abs(sum-target)<abs(close-target)){
                close=sum;
            }
            if(sum<target){
                low++;
            }
            else if(sum>target){
                high--;
            }
            else{
                return sum;
            }
        }
       }
       return close;
    }
};