class Solution {
public:
    string addBinary(string a, string b) {
      //brute force solution for these 
      int carry=0;
      int n=a.size()-1;
      int m=b.size()-1;
      string ans;
      while(n>=0 || m>=0 || carry!=0){
        int sum=(((n+1)?(a[n]-'0'):0)+((m+1)?(b[m]-'0'):0)+carry);
        if(sum==0 || sum==1){
            carry=0;
            ans.push_back(sum+'0');
        }
        else if(sum==2 || sum==3){
            carry=1;
            if(sum==2){
                ans.push_back('0');
            }
            else{
                ans.push_back('1');
            }
        }
        if(n+1){n--;}
        if(m+1){m--;}
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};