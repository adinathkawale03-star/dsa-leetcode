class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            int i=0;
            int sum=0;
            while(i<nums.size()){
                int res=(nums[i] + mid - 1) / mid;
                sum+=res;
                i++;
            }
            
            if(sum<=threshold){
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