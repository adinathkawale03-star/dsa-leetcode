class Solution {
public:
    int smallestNumber(int n, int t) {
       for(int i=n;i<=110;i++){
        int temp=i;
        int product=1;
        while(temp>0){
            product*=(temp%10);
            temp=temp/10;
        }
        if(product%t ==0){
            return i;
        }
       }
       return 110;
    }
};