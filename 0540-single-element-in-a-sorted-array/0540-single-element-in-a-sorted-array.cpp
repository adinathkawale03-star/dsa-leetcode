class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //binary search in these problem approch are the  sequence in the order if the double element are arranged from the begining we should have the 
        int n=nums.size();
        int low=1;
        int high=n-2;
        if(n==1){return nums[0];}
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]!=nums[mid-1]  && nums[mid+1]!=nums[mid]){
                return nums[mid];
            }
            if((mid%2==0 && nums[mid]==nums[mid+1] )|| (mid%2==1 && nums[mid]==nums[mid-1])){//in these condition to the mid no single element appeared
                low=mid+1;  
            }
            else{
                high=mid-1;//single element appeared in the mid element in the array
            }
        }
        return -1;
    }
};