class Solution {
private:
    int check(vector<int>& nums,int mid){
        int n=nums.size();
        int load=0;
        int days=1;
        for(int i:nums){
            if((i+load)<=mid){
                load+=i;
            }
            else{
                days++;
                load=i;
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int low=*max_element(weights.begin(),weights.end());
       int high=accumulate(weights.begin(),weights.end(),0);
       int n=weights.size();
       if(days==1){
        return high;
       }
       if(days==n){
        return low;
       }
       while(low<=high){
        int mid=low+((high-low)/2);
        int help=check(weights,mid);
        if(help<=days){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return low;
    }
};