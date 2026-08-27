class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int ans= 10;          
        int u = 9;     
        int a= 9; 
        for (int k = 2; k <= n && a > 0; ++k) {
            u=u*a;
            ans=ans+u;
            a--;
        }
        return ans;
    }
};