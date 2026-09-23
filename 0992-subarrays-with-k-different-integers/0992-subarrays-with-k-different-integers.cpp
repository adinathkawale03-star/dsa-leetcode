class Solution {
private:
    int fu(vector<int>& nums,int k){
        if(k==0){return 0;}
        unordered_map<int,int> a;
        int l=0,r=0,cnt=0,n=nums.size();
        while(r<n){
            a[nums[r]]++;
            while(a.size()>k){
                a[nums[l]]--;
                if(a[nums[l]]==0){
                    a.erase(nums[l]);
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (fu(nums,k)-fu(nums,k-1));
    }
};