class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans1,ans2;
        int n=nums.size();
        int count=0;
        unordered_map<int,int> a;
        for(int i=0;i<n;i++){
            a[nums[i]]++;
        }
        for(auto it:a){
            if(it.second==1 && count<1){
                ans1=it.first;
                count=1;
            }
            else if(it.second==1 && count==1){ans2=it.first;}
        }
        return {ans1,ans2};
    }
};