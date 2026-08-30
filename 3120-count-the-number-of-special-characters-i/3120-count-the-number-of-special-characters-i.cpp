class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> a(26,false);
        vector<bool> b(26,false);
        for(char ch:word){
            if(ch>90){
                a[ch-'a']=true;
            }
            else{
                b[ch-'A']=true;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(a[i] && b[i]){
                ans++;
            }
        }
        return ans;

    }
};