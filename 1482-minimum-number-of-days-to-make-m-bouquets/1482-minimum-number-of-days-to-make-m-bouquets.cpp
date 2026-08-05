class Solution {
private:
    bool possible(vector<int>& nums,int mid,int m,int k){
        int n=nums.size();
        int cnt=0;
        int bloom=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=mid){
                cnt++;
            }
            else{
                bloom+=(cnt/k);
                cnt=0;
            }
        }
        bloom+=(cnt/k);
        return bloom>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        //optimal approch for these problem. in these problem we can be use the binary search approch because the range is defined for these which is the min and the max element array and the minimum is from that 
        int n=bloomDay.size();
        if((long long)m*k>n){return -1;}
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(possible(bloomDay,mid,m,k)){
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