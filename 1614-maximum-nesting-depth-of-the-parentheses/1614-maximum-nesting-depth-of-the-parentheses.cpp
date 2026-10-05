class Solution {
public:
    int maxDepth(string s) {
        int depth=0,maxdepth=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                depth++;
                maxdepth=max(maxdepth,depth);
            }
            else if(s[i]==')'){
                if(depth!=0)
                    depth--;
            }
        }
        return maxdepth;
    }
};