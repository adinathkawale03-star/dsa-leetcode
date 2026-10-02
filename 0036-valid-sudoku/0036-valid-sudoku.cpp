class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       // i for the col and the j for the row 
       for(int i=0;i<9;i++){
        vector<int> help(10,0);
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                if(help[board[i][j]-'0']!=1){
                    help[board[i][j]-'0']=1;
                }
                else{
                    return false;
                }
            }
        }
       }
       for(int i=0;i<9;i++){
        vector<int> help(10,0);
        for(int j=0;j<9;j++){
            if(board[j][i]!='.'){
                if(help[board[j][i]-'0']!=1){
                    help[board[j][i]-'0']=1;
                }
                else{
                    return false;
                }
            }
        }
       }
       for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            vector<int> ans(10,0);
            for(int k=0;k<3;k++){
                for(int z=0;z<3;z++){
                    if(board[i+k][j+z]!='.'){
                        if(ans[board[i+k][j+z]-'0']!=1){
                            ans[board[i+k][j+z]-'0']=1;
                        }
                        else{
                            return false;
                        }
                    }
                }
            }
        }
       }
       return true;
    }
};