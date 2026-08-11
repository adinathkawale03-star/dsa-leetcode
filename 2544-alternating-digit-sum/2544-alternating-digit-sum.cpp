class Solution {
public:
    int alternateDigitSum(int n){
        string s=to_string(n);
        int x=s.size();
        int sum=0;
        for(int i=0;i<x;i++){
            int sign=(-(s[i]-'0'));
            if(i%2==0){
                sign=((s[i]-'0'));
            }
            sum+=sign;
        }
        return sum;
    }
};