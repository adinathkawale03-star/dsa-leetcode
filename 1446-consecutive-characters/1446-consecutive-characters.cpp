class Solution {
public:
    int maxPower(string s) {
    int n=s.size();
    int count=1;
    int maxcount=1;
    for(int i=1;i<n;i++){
        if((s[i]-'a')==(s[i-1]-'a')){
            count++;
            if(count>maxcount){
                maxcount=count;
            }
        }
        else{
            count=1;
        }

    }
    return maxcount;

    }
};