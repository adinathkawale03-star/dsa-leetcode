class Solution {
public:
    double myPow(double x, int n) {
      //optimal solution for the given problem
      long long nn=n;
      double ans=1.0000;
      if(nn<0){nn=-1*nn;}
      while(nn>0){
        if(nn%2==0){
            x=x*x;
            nn=nn/2;
        }
        else{
            ans=ans*x;
            nn=nn-1;
        }
      }
      if(n<0) ans=(double)1.0000/(double)ans;
      return ans;
    }
};