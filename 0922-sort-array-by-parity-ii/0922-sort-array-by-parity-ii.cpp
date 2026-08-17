class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        //brute force solution
       int n=nums.size();
       vector<int> ans(n);
       sort(nums.begin(),nums.end());
       int eve=0;
       int odd=1;
       for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            ans[eve]=nums[i];
            eve+=2;
        }
        else{
            ans[odd]=nums[i];
            odd+=2;
        }
       }
       return ans;
    }
};
//tc:o(nlogn+n),sc:o(n);