class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int l=nums.size();
        k=k%l;
        if(l==1){return;}
        temp.insert(temp.begin(),nums.begin()+l-k,nums.end());
        nums.erase(nums.begin()+l-k+1,nums.end()+1);
        nums.insert(nums.begin(),temp.begin(),temp.end());
    }
};