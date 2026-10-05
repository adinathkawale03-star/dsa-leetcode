class Solution {
public:
    int myAtoi(string s) {
        //brute force solution for the given varibale 
        //tc: o(n)
        //sc:o(1)
        long long ans=0;
        int sign=1;
        int i=0;
        int n=s.size();
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && s[i]=='+'){
            i++;
        }
        else if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }
        while(i<n && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            i++;
            if(ans*sign>=INT_MAX){
                return INT_MAX;
            }
            if(ans*sign<=INT_MIN){
                return INT_MIN;
            }
        }
        return ans*sign;
    }
};