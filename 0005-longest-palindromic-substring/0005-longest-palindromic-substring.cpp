class Solution {
private:
    int expand(string& s,int left,int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
public:
    string longestPalindrome(string s) {
        if(s.empty()){return "";}
       int start=0,maxlen=0;
       int len=0;
       int n=s.size();
       for(int i=0;i<n;i++){
        int len1=expand(s,i,i);
        int len2=expand(s,i,i+1);
        len=max(len1,len2);
        if(len>maxlen){
            start=i-(len-1)/2;
            maxlen=len;
        }

       }
       return s.substr(start,maxlen);
    }
};