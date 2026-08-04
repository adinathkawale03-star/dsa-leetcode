class Solution {
private:
    int check(vector<int>& nums,int mid){
        int cnt=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if((sum+nums[i])<=mid){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
                cnt++;
            }
        }
        return cnt;
    }
public:
    int splitArray(vector<int>& nums, int k) {
       int low=*max_element(nums.begin(),nums.end());
       int high=accumulate(nums.begin(),nums.end(),0);
       int n=nums.size();
       if(k==n){
          return low;
       }
       if(k==1){
        return high;
       }
       while(low<=high){
        int mid=low+((high-low)/2);
        int help=check(nums,mid);
        if(help>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return low;
    }
};