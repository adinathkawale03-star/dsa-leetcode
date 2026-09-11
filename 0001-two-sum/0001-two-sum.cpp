class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //striver sde sheet revision
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            int num=target-nums[i];
            if(a.find(num)!=a.end()){
              return {a[num],i};
            }
            a[nums[i]]=i;
        }
        return {-1,-1};
    }
};