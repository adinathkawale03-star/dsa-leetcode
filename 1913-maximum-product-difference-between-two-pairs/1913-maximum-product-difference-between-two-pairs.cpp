class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       int n=nums.size();
       int num1=INT_MIN,num2=INT_MIN,num3=INT_MAX,num4=INT_MAX;
       for(int i:nums){
        if(i>=num1){
            num2=num1;
            num1=i;
        }
        else if(num1>i && num2<=i){
            num2=i;
        }
        if(num3>=i){
            num4=num3;
            num3=i;
        }
        else if(num3<i && num4>=i){
            num4=i;
        }
       }
        return ((num1*num2)-(num3*num4));
    }
};