class Solution {
private: 
   int check(vector<int>& nums,int mid){
        int sum=0;
        int cnt=1;
        for(int i:nums){
            if(i+sum<=mid){
                sum+=i;
            }
            else{
                cnt++;
                sum=i;
            }
        }
        return cnt;
   }
public:
    int splitArray(vector<int>& nums, int k) {
       int n=nums.size();
       int low=*max_element(nums.begin(),nums.end());
       int high=accumulate(nums.begin(),nums.end(),0);
       if(k>n){return -1;}
       if(k==n){return low;}
       if(k==1){
        return high;
       }
       while(low<=high){
        long long mid=low+((high-low)/2);
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