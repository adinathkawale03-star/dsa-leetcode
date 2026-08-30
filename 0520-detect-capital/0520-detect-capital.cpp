class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int capital=0;
        int first=0;
        int lower=0;
        for(int i=0;i<n;i++){
            if((word[i])>64 && (word[i])<91){
              if(i==0){
                first++;
              }
              capital++;
            }
            else{
                lower++;
            }
        }
        if(first==1){
            if(capital==1 || (capital==n)){
                return true;
            }
            else{
                return false;
            }
        }
        if(lower==n){
            return true;
        }
        return false;
    }
};