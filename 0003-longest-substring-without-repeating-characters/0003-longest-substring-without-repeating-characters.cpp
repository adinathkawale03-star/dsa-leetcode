class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.size();
     int l=0;
     int r=0;
     int maxi=0;
     vector<int> a(256,-1);
     while(r<n){
        if(a[s[r]]!=-1){
            if(a[s[r]]>=l){
                l=a[s[r]]+1;
            }
        }
        maxi=max(maxi,r-l+1);
        a[s[r]]=r;
        r++;
     }
     return maxi;
    }
};