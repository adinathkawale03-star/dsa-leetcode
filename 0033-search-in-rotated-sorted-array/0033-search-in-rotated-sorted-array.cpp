class Solution {
public:
    int search(vector<int>& nums, int target) {
        int nums11=-1;
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]==target){
               nums11=i;
               break;
            }
            else{
                continue;
            }
        }
        return nums11;
    }
};