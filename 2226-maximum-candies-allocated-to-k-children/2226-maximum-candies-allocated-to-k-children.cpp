class Solution {
private: bool check(vector<int>& nums,int mid,long long k){
     long long count=0;
    for(int i:nums){
        count+=i/mid;
        if(count>=k){return true;}
    }
    return false;
}
public:
    int maximumCandies(vector<int>& candies, long long k) {
       int low=1;
       int high=*max_element(candies.begin(),candies.end());
       int ans=0;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(check(candies,mid,k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return ans;
    }
};