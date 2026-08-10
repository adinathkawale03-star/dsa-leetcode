class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){return true;}
        long long low=0;
        long long high=sqrt(c);
        while(low<=high){
            long long pro= ((low * low) + (high * high));
            if(pro ==c){
                return true;
            }
            if( pro >c){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
};