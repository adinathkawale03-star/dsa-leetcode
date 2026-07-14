class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       unordered_map<int,int> a;
       int ans=0;
       int n=nums.size();
       for(int i=0;i<n;i++){
        a[nums[i]]++;
       } 
       for(auto it:a){
        if(it.second>1){ans=ans^it.first;}
       }
       return ans;
    }
};