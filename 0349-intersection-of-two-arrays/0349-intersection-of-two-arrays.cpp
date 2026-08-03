class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       //brute force solution
       vector<int> ans;
       int n=nums1.size();
       int m=nums2.size();
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       int left=0;
       int right=0;
       while(left<n && right<m){
          if(nums1[left]<nums2[right]){
            left++;
          }
          else if(nums1[left]>nums2[right]){
            right++;
          }
          else{
            if(ans.empty() || ans.back()!=nums1[left]){
                ans.push_back(nums1[left]);
            }
            left++;
            right++;
          }
       }
       return ans;
    }
};