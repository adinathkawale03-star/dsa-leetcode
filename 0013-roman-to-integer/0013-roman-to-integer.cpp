class Solution {
public:
    int romanToInt(string s) {
       int n=s.size();
       unordered_map<char,int> a={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
       int ans=0;
       for(int i=0;i<n;i++){
        if(i+1<n && a[s[i]]<a[s[i+1]]){
            ans-=a[s[i]];
        }
        else{
            ans+=a[s[i]];
        }
       }
       return ans;
    }
};