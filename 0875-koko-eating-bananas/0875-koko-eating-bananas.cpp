class Solution {
private: int maxi(vector<int>& nums){
    int maxi=INT_MIN;
    for(int i:nums){
        maxi=max(i,maxi);
    }
    return maxi;
}
    long long check(vector<int>& nums,long long mid){
        long long hrs=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            hrs+=ceil((double)nums[i]/(double)mid);
        }
        return hrs;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxi(piles);
        while(low<=high){
            long long mid=low+((high-low)/2);
            long long help=check(piles,mid);
            if(help<=h){
                high=mid-1;//shifting to the smaller value then these value
            }
            else{
                low=mid+1;//shifting to the upper value because they required more time so for less upper value
            }
        }
        return low;
    }
};