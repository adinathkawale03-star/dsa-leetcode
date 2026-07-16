class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     long long ans=0;
     int mx=0;
     int n=nums.size();
     vector<int> prefixgcd(n);
     for(int i=0;i<n;i++){
        mx=max(mx,nums[i]);
        prefixgcd[i]=gcd(nums[i],mx);
     }
     sort(prefixgcd.begin(),prefixgcd.end());
     int i=0;
     int j=n-1;
     while(i<j){
        ans=ans+gcd(prefixgcd[i],prefixgcd[j]);
        i++;
        j--;
     }
     return ans;    
    }
};