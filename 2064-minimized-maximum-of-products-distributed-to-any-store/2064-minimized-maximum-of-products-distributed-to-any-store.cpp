class Solution {
private: 
    int check(vector<int>& nums,int mid){
        int cnt=0;
        for(int i:nums){
            cnt+=ceil((double)i/(double)mid);
        }
        return cnt;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
        int ans=high;
        while(low<=high){
            int mid=low+((high-low)/2);
            int help=check(quantities,mid);
            if(help>n){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};