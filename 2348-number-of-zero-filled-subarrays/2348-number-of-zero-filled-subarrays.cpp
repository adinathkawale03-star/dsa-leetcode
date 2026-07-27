class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long tempcount=0;
        for(int i:nums){
            if(i==0){
                count++;
                tempcount+=count;
            }
            else{
                count=0;
            }
        }
        return tempcount;
    }
};