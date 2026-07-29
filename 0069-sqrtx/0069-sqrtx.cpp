class Solution {
public:
    int mySqrt(int x) {
       int low=1;
       int high=x;
       int ans=high;
       while(low<=high){
        long long mid=low+((high-low)/2);
        long long pro=mid*mid;
        if(pro<=x){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
       }
       return ans;
    }
};