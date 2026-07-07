class Solution {
public:
    bool checkOnesSegment(string s) {
     int count=1;
     int n=s.size();
     for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count=0;
        }
        if(s[i]=='1' && count==0){
          return false;
        }
        
     }  
     return true;  
    }
};