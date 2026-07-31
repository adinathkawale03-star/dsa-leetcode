class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //most optimal approch for these problem 
        unordered_map<int,int> help;
        for(int i:nums){
            help[i]++;
            if(help[i]>nums.size()/2){
                return i;
            }
        }
        return nums[0];
    }
};