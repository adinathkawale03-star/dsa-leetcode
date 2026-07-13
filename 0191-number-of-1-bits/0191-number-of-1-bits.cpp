class Solution {
public:
    int hammingWeight(int n) {
        string a="";
        int digit;
        while(n>0){
            digit=n%2;
            a=a+to_string(digit);
            n=n/2;
        }
        int n1=a.size();
        int sum=0;
        for(int i=0;i<n1;i++){
            if(a[i]=='1'){sum++;}
        }
        return sum;
    }
};