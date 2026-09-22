class Solution {
public:
    int characterReplacement(string s, int k) {
      int n=s.size();
      int l=0;
      int r=0;
      vector<int> a(26,0);
      int maxfreq=0;
      int maxi=0;
      while(r<n){
        a[s[r]-'A']++;
        maxfreq=max(maxfreq,a[s[r]-'A']);
        while(((r-l+1)-maxfreq)>k){
            a[s[l]-'A']--;
            maxfreq=0;
            for(int i=0;i<26;i++){
                maxfreq=max(maxfreq,a[i]);
            }
            l++;
        }
        maxi=max(maxi,r-l+1);
        r++;
      }
      return maxi;
    }
};
//tc:o(27N)
//sc:o(27):it can be take becuase in the while loop they can be replacing the values