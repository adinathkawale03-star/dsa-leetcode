class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,0);
        stack<int> st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            int cnt=0;
            while(!st.empty() && arr[st.top()]<=arr[i]){
                cnt++;
                st.pop();
            }
            if(!st.empty()){
                cnt++;
            }
            ans[i]=cnt;
            st.push(i);
        }
        return ans;
    }
};