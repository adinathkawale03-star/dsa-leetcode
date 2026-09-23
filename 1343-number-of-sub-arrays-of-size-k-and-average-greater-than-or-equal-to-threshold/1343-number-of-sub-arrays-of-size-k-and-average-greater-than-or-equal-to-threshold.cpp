class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int l=0;
        int r=k;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int cnt=0;
        if((sum/k)>=threshold){
            cnt++;
        }
        while(r<n){
            sum=(sum-arr[l])+arr[r];
            if((sum/k)>=threshold){
                cnt++;
            }
            l++;
            r++;
        }
        return cnt;
    }
};