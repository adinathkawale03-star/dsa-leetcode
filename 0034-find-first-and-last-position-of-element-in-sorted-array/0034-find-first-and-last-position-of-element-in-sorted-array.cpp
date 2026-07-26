class Solution {
private: int firstpo(vector<int> nums,int x,int n){
       int low=0;
       int high=n-1;
       int ans=-1;
       while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==x){
            ans=mid;
            high=mid-1;
        }
        else if(nums[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return ans;

}
      int lastpo(vector<int> nums,int x, int n){
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
      }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int n=nums.size();
       int first=firstpo(nums,target,n);
       if(first==-1){return {-1,-1};}
       int last=lastpo(nums,target,n);
       return {first,last};
    }
};