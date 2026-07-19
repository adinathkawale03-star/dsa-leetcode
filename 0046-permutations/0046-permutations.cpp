class Solution {
public:
    vector<int> next_permut(vector<int>& nums){
        int index=-1;
        int aa=nums.size();
        for(int i=aa-2;i>=0;i--){
             if(nums[i+1]>nums[i]){
                index=i;
                break;
             }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return nums; 
        }
        for(int i=aa-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
        return nums;
    }
    vector<vector<int>> permute(vector<int>& nums) {
       int n=nums.size();
       vector<vector<int>> ans;
       int fact=1;
       for(int i=1;i<=n;i++){
        fact*=i;
       }
       for(int i=0;i<fact;i++){
        ans.push_back(next_permut(nums));
       }
       return ans;
    }
};