class Solution {
public:
    int beautySum(string s) {
        //brute force solution for the given problem
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
          vector<int> a(26,0);
          for(int j=i;j<n;j++){
            a[s[j]-'a']++;
            int mini=INT_MAX;
            int maxi=0;
            for(int i:a){
                if(i>0){
                    mini=min(mini,i);
                    maxi=max(maxi,i);
                }
            }
            ans+=(maxi-mini);
          }
        }
        return ans;
    }
};