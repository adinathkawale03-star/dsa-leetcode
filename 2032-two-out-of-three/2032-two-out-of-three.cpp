class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> ans;
        for(int i:nums1){
            for(int j:nums2){
                if(i==j){
                     ans.insert(i);
                }
            }
        }
        for(int i:nums2){
            for(int j:nums3){
                if(i==j){
                    ans.insert(i);
                }
            }
        }
        for(int i:nums1){
            for(int j:nums3){
                if(i==j){
                    ans.insert(i);
                }
            }
        }
        vector<int> ans1;
        for(auto it:ans){
            ans1.push_back(it);
        }
        return ans1;
    }
};