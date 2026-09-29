class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long cnt=0;
        int n=nums.size();
        unordered_map<int,int> a;
        a[0]++;
        int xr=0;
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
            cnt+=a[xr];
            a[xr]++;
        }
        return cnt;
    }
};