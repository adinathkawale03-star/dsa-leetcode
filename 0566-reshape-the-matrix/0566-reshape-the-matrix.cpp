class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int n=mat.size();
       int m=mat[0].size();
       if(r*c!=m*n){return mat;}
       vector<vector<int>> ans(r,vector<int>(c));
       int temp1=0,temp2=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[temp1][temp2]=mat[i][j];
            temp2++;
            if(temp2==c){
                temp1++;
                temp2=0;
            }
        }
       }
       return ans; 
    }
};