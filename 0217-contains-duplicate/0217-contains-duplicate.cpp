class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> a;
       for(int i:nums){
        if(a.find(i)!=a.end()){
            return true;
        }
        a[i]++;
       }
       return false;
    }
};