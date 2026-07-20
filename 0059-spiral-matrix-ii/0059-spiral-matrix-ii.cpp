class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0;
        vector<vector<int>> ans(n,vector<int>(n));
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int count=1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans[top][i]=count;
                count++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=count;
                count++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=count;
                    count++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=count;
                    count++;
                }
                left++;
            }
            
        }
        return ans;
    }
};