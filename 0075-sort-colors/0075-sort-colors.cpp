class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=nums.size();
        int j,mini=0,temp;
        for(int i=0;i<l-1;i++){
            mini=i;
            for(int j=i;j<l;j++){
                if(nums[j]<nums[mini]){
                    mini=j;
                }
            }    
                temp=nums[i];
                nums[i]=nums[mini];
                nums[mini]=temp;
        }
    }
};