class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> a;
        for(int k:nums1){
            for(int l:nums2){
                a[k+l]++;
            }
        }
        int cnt=0;
        for(int k:nums3){
            for(int l:nums4){
                cnt+=a[-(k+l)];
            }
        }
        return cnt;
    }
};