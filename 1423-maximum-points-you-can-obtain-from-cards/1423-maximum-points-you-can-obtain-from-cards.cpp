class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int maxi=sum;
        int r=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            sum=sum-cardPoints[i];
            sum+=cardPoints[r];
            r--;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
//tc:o(2*k)
//sc:o(1)