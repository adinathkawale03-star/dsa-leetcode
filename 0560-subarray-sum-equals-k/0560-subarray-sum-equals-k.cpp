class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> a;
        int cnt=0;
        int xr=0;
        a[0]++;
        for(int i=0;i<nums.size();i++){
            xr+=nums[i];
            int x=xr-k;
            cnt+=a[x];
            a[xr]++;
        }
        return cnt;
    }
};