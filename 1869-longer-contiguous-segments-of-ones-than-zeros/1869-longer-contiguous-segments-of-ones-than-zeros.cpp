class Solution {
public:
    bool checkZeroOnes(string s) {
        int n=s.size();
        int count1=0,count0=0,maxi1=0,maxi0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++;
                count1=0;
                maxi0=max(count0,maxi0);
            }
            else{
                count1++;
                count0=0;
                maxi1=max(count1,maxi1);
            }
        }
        if(maxi1>maxi0){
            return true;
        }
        return false;
    }
};