class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=0;
        int n=matrix.size();
        int m=matrix[0].size();
        while(matrix[i][0]<=target && i<(n-1)){
            if(matrix[i+1][0]>target){
               break;
            }
            else if(matrix[i][0]<target){
                i++;
            }

        }
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target){return true;}
        }
        return false;
    }
};