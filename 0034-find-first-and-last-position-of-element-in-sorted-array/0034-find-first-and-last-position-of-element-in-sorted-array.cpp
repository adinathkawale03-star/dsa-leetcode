class Solution {
private: 
    int findfloor(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int findlast(vector<int>& nums,int target){
        int n=nums.size();
        int ans=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==target){
                low=mid+1;
                ans=mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){return {-1,-1};}
        int first=findfloor(nums,target);
        if(first==-1){return {-1,-1};}
        int last =findlast(nums,target);
        return {first,last};
    }
};