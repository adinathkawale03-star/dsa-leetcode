class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        if(t.size()>s.size()){
            return 0;
        }
        if(t==s){
            return 1;
        }
        int freq[26]={0};
        int fre[26]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            fre[t[i]-'a']++;
        }
        int mini=INT_MAX;
        for(int i=0;i<26;i++){
            if(fre[i]>0){
                mini=min(mini,freq[i]/fre[i]);
            }
        }
        return mini;

    }
};