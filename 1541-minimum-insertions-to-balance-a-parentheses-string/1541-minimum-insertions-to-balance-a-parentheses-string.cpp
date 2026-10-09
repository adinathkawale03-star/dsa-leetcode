class Solution {
public:
    int minInsertions(string s) {
      int ans=0;
      float o=0.0;
      for(char ch:s){
        if(ch=='('){
            if(o-(int)o!=0){
                ans+=1;
                o=o-0.5;
            }
            o+=1.0;
        }
        else{
            o=o-0.5;
            if(o<0){
            ans+=1;
            o=o+1.0;
            }
        }
       
      }  
      if(o-(int)o !=0){
        ans++;
        o-=0.5;
      }
      ans+=(int)o * 2;
      return ans;
    }
};