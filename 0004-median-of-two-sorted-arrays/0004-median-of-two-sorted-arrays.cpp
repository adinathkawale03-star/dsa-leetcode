class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //brute force approch for these problem 
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> nums3;
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                nums3.push_back(nums2[j++]);
            }
            else{
                nums3.push_back(nums1[i++]);
            }
        }
        while(i<n1){
            nums3.push_back(nums1[i++]);
        }
        while(j<n2){
            nums3.push_back(nums2[j++]);
        }
        int n=n1+n2;
        if(n%2==0){
            return (double)(((double)nums3[n/2]+(double)nums3[n/2-1])/2);
        }
        return (double)nums3[n/2];
    }
};