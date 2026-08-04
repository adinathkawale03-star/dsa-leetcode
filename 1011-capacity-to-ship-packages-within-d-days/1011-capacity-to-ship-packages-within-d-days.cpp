class Solution {
private:
    int check(vector<int>& nums,int mid){
        int n=nums.size();
        int cnt=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if((sum+nums[i])<=mid){
                sum+=nums[i];
            }
            else{
                cnt++;
                sum=nums[i];
            }
        }
        return cnt;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        if(days==1){
            return high;
        }
        if(days==n){return low;}
        while(low<=high){
            int mid=low+((high-low)/2);
            int help=check(weights,mid);
            if(help>days){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};