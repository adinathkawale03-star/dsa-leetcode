class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int n=num.size()-1;
       vector<int> ans;
       int carry=0;
       while(n>=0 || k!=0 || carry!=0){
            int sum=((n+1)?num[n]:0)+k%10+carry;
            k=k/10;
            carry=sum/10;
            ans.push_back(sum%10);
            if(n+1){n--;}
       }
       reverse(ans.begin(),ans.end());
       return ans;

    }
};