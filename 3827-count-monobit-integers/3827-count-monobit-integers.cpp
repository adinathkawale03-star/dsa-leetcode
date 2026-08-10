class Solution {
public:
    int countMonobit(int n) {
        //brute force solution for these problem is correct but the concept is comed pattern bit manipulation
        int cnt=1;
        for(int i=1;i<=n;i++){
            int digit1=i%2;
            int x=i;
            while(x>0){
                int digit2=x%2;
                if(digit1!=digit2){
                    break;
                }
                x=x/2;
            }
            if(x==0){
                cnt=cnt+1;
            }
        }
        return cnt;
    }
};