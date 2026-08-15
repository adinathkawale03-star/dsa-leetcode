class Solution {
public:
    string addStrings(string num1, string num2) {
      string ans="";
      int n=num1.size()-1;
      int m=num2.size()-1;
      int carry=0;
      while(n>=0 || m>=0 || carry!=0){
        int sum=(((n+1)?(num1[n]-'0'):0)+((m+1)?(num2[m]-'0'):0)+carry);
        ans.push_back((sum%10)+'0');     
        carry=sum/10;
        if(n+1){n--;}
        if(m+1){m--;}
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};