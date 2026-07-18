class Solution {
public:
    int countPrimes(int n) {
        vector<bool> is(n+1,true);
        int ans = 0;

        for(int i=2;i<n;i++){
            if(is[i]){
                ans++;
                for(int j=i*2;j<n;j+=i){
                    is[j]=false;
                }
            }
        }

        return ans;
    }
};