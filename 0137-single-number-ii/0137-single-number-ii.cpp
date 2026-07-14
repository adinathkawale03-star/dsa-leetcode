class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> a;
       int ans;
       int n=nums.size();
       for(int i=0;i<n;i++){
         a[nums[i]]++;
       } 
       for(auto it:a){
        if(it.second==1){ans=it.first;}
       }
       return ans;
    }
};