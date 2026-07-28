class Solution {
private:
    int findmax(vector<int> piles){
        int maxi=INT_MIN;
        for(int I:piles){
            maxi=max(I,maxi);
        }
        return maxi;
    }
    long long calculatehre(vector<int> piles,int hours){
        long long totalh=0;
        for(int i:piles){
            totalh+=ceil((double)i/(double)hours);
        }
        return totalh;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int low=1;
      int high=findmax(piles);
      while(low<=high){
        int mid=low+(high-low)/2;
        long long totalhrs=calculatehre(piles,mid);
        if(totalhrs<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
      return low;
    }
};