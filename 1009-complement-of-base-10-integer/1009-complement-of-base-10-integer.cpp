class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){return 1;}
        string ans="";
        while(n!=0){
            ans=char(((n%2) + '0'))+ans;
            n=n/2;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='0'){
                ans[i]='1';
            }
            else{
                ans[i]='0';
            }
        }
        int cnt=ans.size()-1;
        int ans2=0;
        for(int i=0;i<ans.size();i++){
          if(ans[i]=='1'){
            ans2+=pow(2,cnt);
          }
          cnt--;
        }
        return ans2;
    }
};