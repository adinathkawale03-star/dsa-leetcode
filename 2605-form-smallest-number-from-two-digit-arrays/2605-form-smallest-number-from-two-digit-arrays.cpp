class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int arr1[10]={0};
        int arr2[10]={10};
        for(int i:nums1){
            arr1[i]=1;
        }   
        for(int j:nums2){
            arr2[j]=1;
        }
        int mini1=10,mini2=10;
        for(int i=1;i<10;i++){
            if(arr1[i]!=0 && arr1[i]==arr2[i]){
                return i;
            }
            if(arr1[i]>0){
                mini1=min(i,mini1);
            }
            if(arr2[i]>0){
                mini2=min(i,mini2);
            }
        }
        if(mini1>mini2){
            return mini2*10+mini1;
        }
        return mini1*10+mini2;

    }
};