class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            if(a.count(nums[i])){
                return true;
            }
            a[nums[i]]=1;
        }
        return false;
    }
};