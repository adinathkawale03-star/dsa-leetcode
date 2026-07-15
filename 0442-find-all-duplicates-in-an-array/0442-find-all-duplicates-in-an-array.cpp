class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     unordered_map<int,int> a;
     int n=nums.size();
     vector<int> ans;
     for(int i=0;i<n;i++){
        a[nums[i]]++;
        if(a[nums[i]]==2){ans.push_back(nums[i]);}
     }   
     return ans;

    }
};