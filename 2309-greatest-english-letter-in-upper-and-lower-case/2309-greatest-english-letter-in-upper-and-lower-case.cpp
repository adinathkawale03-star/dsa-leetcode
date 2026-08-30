class Solution {
public:
    string greatestLetter(string s) {
        vector<bool> lower(26,false);
        vector<bool> upper(26,false);
        for(char ch:s){
            if(ch>90){
                upper[ch-'a']=true;
            }
            else{
                lower[ch-'A']=true;
            }
        }
        for(int i=25;i>=0;i--){
            if(lower[i]==true && upper[i]==true){
               return string(1, 'A' + i);
            }
        }
        return "";
    }
};