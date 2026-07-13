class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> mpp;
       int ans;
       int n=nums.size();
       for(int i=0;i<n;i++){
        mpp[nums[i]]++;
       }
       for(auto it:mpp){
        if(it.second>(n/2)){ans=it.first;
        break;}
       }
       return ans;
    }
};