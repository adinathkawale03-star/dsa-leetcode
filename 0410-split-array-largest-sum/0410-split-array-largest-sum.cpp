class Solution {
private: int count(vector<int>& nums,int i){
    int n=nums.size();
    int start=1;
    int cnt=0;
    for(int j=0;j<n;j++){
        if(cnt+nums[j]<=i){
            cnt+=nums[j];
        }
        else{
            start++;
            cnt=nums[j];
        }
    }
    return start;
}
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n) return -1;
        int low = *max_element(nums.begin(), nums.end());
         if(k==n){return low;}
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int subarray = count(nums, mid);
            if (subarray > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};