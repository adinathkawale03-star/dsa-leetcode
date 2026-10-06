class Solution {
public:
    int minSwaps(string s) {
        int open=0;
        int close=0;
        int require=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                open++;
            }
            else if(s[i]==']' && open>0){
                open--;
            }
            else{
                require++;
            }
        }
        return (require+1)/2;
    }
};