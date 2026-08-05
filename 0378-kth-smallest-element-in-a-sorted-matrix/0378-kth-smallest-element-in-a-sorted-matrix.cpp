class Solution {
private:
    int check(vector<vector<int>>& nums,int mid){
        int i=0;
        int n=nums.size();
        int j=n-1;
        int count=0;
        while(i>=0 && j>=0 && i<n && j<n){
            if(nums[i][j]<=mid){
                count+=(j+1);
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //optimal solution for these problem are the use the technique to find the element in the 2d matrix present or the not 
        int n=matrix.size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        int ans=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            int help=check(matrix,mid);
            if(help>=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};