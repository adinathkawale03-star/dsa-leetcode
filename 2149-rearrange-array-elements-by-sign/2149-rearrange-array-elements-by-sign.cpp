class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        int j = 0;
        int j1 = 1;
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                v[j] = nums[i];
                j+=2;
            }else{
                v[j1] = nums[i];
                j1+=2;
            }
        }
        return v;
    }
};