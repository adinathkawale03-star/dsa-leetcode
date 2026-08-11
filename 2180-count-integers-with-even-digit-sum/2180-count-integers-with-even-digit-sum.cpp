class Solution {
public:
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            int sum=0;
            int x=i;
            while(x>0){
                int digit=x%10;
                sum+=digit;
                x=x/10;
            }
            if(sum%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};