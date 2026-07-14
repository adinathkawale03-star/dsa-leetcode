class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum=0;
        int ans;
        if(k==0){return 0;}
        for(int i=0;i<numOnes;i++){
            sum++;
            if((i+1)==k){return sum;}
        }
        if((numOnes+numZeros)>=k){return sum;}
        for(int j=0;j<numNegOnes;j++){
            sum-=1;
            if((numOnes+numZeros+j+1)==k){
                ans=sum;
                break;
            }
        }
        return sum;
    }
};