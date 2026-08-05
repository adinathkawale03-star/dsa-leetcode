class Solution {
private:
    int check(vector<int>& nums,int mid){
        int sum=0;
        for(int i:nums){
            sum+=ceil((double)i/(double)mid);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n=nums.size();
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int ans=high;
       while(low<=high){
         int mid=low+((high-low)/2);
         int help=check(nums,mid);
         if(help<=threshold){
            ans=mid;
            high=mid-1;
         }
         else{
            low=mid+1;
         }
       }
       return ans;
    }
};