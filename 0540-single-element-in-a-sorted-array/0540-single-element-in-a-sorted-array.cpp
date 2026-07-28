class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //brute force solution 
        int xr=0;
        for(int i:nums){
            xr=xr^i;
        }
        return xr;
    }
};