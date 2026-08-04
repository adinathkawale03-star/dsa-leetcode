class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int min_element=INT_MAX;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[low]<=nums[mid]){
                min_element=min(min_element,nums[low]);
                low=mid+1;
            }
            else{
                min_element=min(min_element,nums[mid]);
                high=mid-1;
            }
        }
        return min_element;
    }
};