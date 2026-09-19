class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
      //first we can check the cols and then rows 
      int n=matrix.size();
      for(int i=0;i<n;i++){
        unordered_map<int,int> a;
        for(int j=0;j<n;j++){
            if(a.find(matrix[j][i])!=a.end()){return false;}
            a[matrix[j][i]]=1;
        }
      } 
      //after we can check for the rows 
      for(int i=0;i<n;i++){
        unordered_map<int,int> a;
        for(int j=0;j<n;j++){
            if(a.find(matrix[i][j])!=a.end()){return false;}
            a[matrix[i][j]]=1;
        }
      } 
      return true;

    }
};
//tc:o(2*n^2)==o(n^2)
   