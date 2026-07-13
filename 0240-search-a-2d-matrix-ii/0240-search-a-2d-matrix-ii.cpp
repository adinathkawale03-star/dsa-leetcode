class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n=matrix.size();
       int m=matrix[0].size();
       int end=0;
       int st=0;
       while(st<n && end<m){
        if(matrix[st][end]==target){return true;}
        else if(end==m-1){end=0;
        st++;
        }
        else{
            end++;
        }
       }
       return false;
    }
};