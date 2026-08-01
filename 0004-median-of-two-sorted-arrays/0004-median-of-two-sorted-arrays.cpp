class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //better approch for these problem 
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int ind2=n/2;
        int ind1=ind2-1;
        int ind1ele=-1;
        int ind2ele=-1;
        int i=0,j=0,cnt=0;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                if(cnt==ind1){
                    ind1ele=nums2[j];
                }
                if(cnt==ind2){
                    ind2ele=nums2[j];
                }
                cnt++;
                j++;
            }
            else{
                if(cnt==ind1){
                    ind1ele=nums1[i];
                }
                if(cnt==ind2){
                    ind2ele=nums1[i];
                }
                cnt++;
                i++;
            }
        }
        while(i<n1){
             if(cnt==ind1){
                  ind1ele=nums1[i];
             }
             if(cnt==ind2){
                  ind2ele=nums1[i];
             }
             i++;
             cnt++;
        }
        while(j<n2){
            if(cnt==ind1){
                ind1ele=nums2[j];
            }
            if(cnt==ind2){
                ind2ele=nums2[j];
            }
            j++;
            cnt++;
        }
        if(n%2==1){
            return (double)ind2ele;
        }
        return (double)(((double)ind1ele+(double)ind2ele)/2);
      
    }
};