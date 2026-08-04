class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //binary search
        int n=nums.size();
        if(n==1){return 0;}
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        int low=1;
        int high=n-2;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]){
                low=mid+1;//element in the ascending order and in the further array peak will be found
            }
            else{
                high=mid-1;//element i descending order in the befor mid peak will be found
            }
        }
        return n;
    }
};