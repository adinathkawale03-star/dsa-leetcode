class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> help;
       for(int i=0;i<nums.size();i++){
        int num=target-nums[i];
        if(help.find(num)!=help.end()){
            return {help[num],i};
        }
        help[nums[i]]=i;
       }
       return {-1,-1};
    }
};