class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
     int ans=-1;
     unordered_map<int,int> a;
     int maxi=0;
     for(int i:nums){
        if(i%2==0){
            a[i]++;
            if(a[i]>maxi){
                ans=i;
                maxi=a[i];
            }
            else if(a[i]==maxi){
                ans=min(ans,i);
            }
        }
     }
     return (maxi==0)?-1:ans;
    }
};