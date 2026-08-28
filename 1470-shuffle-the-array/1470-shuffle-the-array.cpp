class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int x=n;
        int ind=0;
        int ind2=0;
        while(x<2*n){
            if(ind%2==0){
                ans[ind]=nums[ind2];
                ind++;
                ind2++;
            }
            else{
                ans[ind]=nums[x];
                x++;
                ind++;
            }
        }
        return ans;
    }
};