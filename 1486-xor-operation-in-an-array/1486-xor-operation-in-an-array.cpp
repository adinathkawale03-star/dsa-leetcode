class Solution {
public:
    int xorOperation(int n, int start) {
        int num=0;
        int ans=0;
        for(int i=0;i<n;i++){
            num=start+2*i;
            ans=ans^num;
        }
        return ans;
    }
};