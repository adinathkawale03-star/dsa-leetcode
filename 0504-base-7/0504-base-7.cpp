class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){return "0";}
       string ans="";
       bool a=false;
       if(num<0){
        a=true;
        num=-num;
       } 
       while(num>0){
        ans=to_string(num%7)+ans;
        num=num/7;
       }
       if(a){
        ans='-'+ans;
       }
       return ans;
    }
};