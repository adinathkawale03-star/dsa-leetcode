class Solution {
public:
    int singleNumber(vector<int>& nums) {
      //optimal approch 1 solution for the given problem 
      int one=0,two=0;
      for(int i:nums){
        one=((one^i) & (~two));
        two=((two^i) & (~one));
      }
      return one;
    }
};