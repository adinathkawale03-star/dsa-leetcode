class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> p;
       vector<int> n;
       vector<int> ans;
       int m=nums.size();
       for(int i=0;i<m;i++){
        if(nums[i]>0){p.push_back(nums[i]);}
        else{n.push_back(nums[i]);}
       }
       for(int i=0;i<m;i++){
        if(i%2==0){ans.push_back(p[i/2]);}
        else{ans.push_back(n[i/2]);}
       }
       return ans;
    }
};