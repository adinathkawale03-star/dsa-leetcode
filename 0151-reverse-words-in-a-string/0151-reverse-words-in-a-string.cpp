class Solution {
public:
    string reverseWords(string s) {
       stack<string> st;
       string help="";
       for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(!help.empty()){
                st.push(help);
                help="";
            }
        }
        else{
            help+=s[i];
        }
       }
       if(!help.empty()){
        st.push(help);
       }
       string ans="";
       int x=st.size();
       for(int i=0;i<x;i++){
        ans+=st.top();
        st.pop();
        if(i==x-1){break;}
        ans+=' ';
       }
       return ans;
    }
};