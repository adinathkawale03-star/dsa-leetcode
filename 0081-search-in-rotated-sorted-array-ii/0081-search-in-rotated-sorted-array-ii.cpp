class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //brute approch for these problem
        for(int i:nums){
            if(i==target){
                return true;
            }
        }
        return false;
    }
};