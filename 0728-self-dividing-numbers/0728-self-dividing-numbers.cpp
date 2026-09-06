class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int x=i;
            while(x!=0){
                int digit=x%10;
                if(digit==0){break;}
                if(i%digit!=0){
                  break;
                }
                x=x/10;
            }
            if(x==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};