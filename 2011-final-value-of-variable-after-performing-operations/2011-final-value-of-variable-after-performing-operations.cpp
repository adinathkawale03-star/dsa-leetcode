class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
      for(int i=0;i<operations.size();i++){
        for(int j=0;j<3;j++){
            if((operations[i][j]-'+')==0){
                count++;
                break;
            }
            else if((operations[i][j]-'-')==0){
                count--;
                break;
            }
            else{
                continue;
            }
        }
      }  
      return count;
    }
};