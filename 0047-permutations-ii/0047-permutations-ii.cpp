class Solution{
private:
    int fact(int n){
        int fac=1;
        for(int i=1;i<=n;i++){
            fac=i*fac;
        }
        return fac;
    }
    vector<int> permutation(vector<int>& nums){
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return nums;
        }
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
        return nums;
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      int n=nums.size();
      int pro=fact(n);
      sort(nums.begin(),nums.end());
      set<vector<int>> ans;
      for(int i=1;i<=pro;i++){
        ans.insert(permutation(nums));
      }
      vector<vector<int>> ans1;
      for(auto it:ans){
        ans1.push_back(it);
      }
      return ans1;
    } 
};