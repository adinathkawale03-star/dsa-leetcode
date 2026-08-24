class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums){
            a[i]++;
        }
        for(auto it:a){
            if(it.second%2==1){
                return false;
            }
        }
        return true;
        //tc:o(n):nearly , sc: o(n)
    }
};