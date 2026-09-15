class Solution {
public:
    int maxArea(vector<int>& arr) {
       int maxi=0;
       int l=0;
       int n=arr.size();
       int r=n-1;
       while(l<r){
        int area=(r-l)*min(arr[r],arr[l]);
        maxi=max(area,maxi);
        if(arr[r]>arr[l]){
            l++;
        }
        else{
            r--;
        }
       }
       return maxi;
    }
};