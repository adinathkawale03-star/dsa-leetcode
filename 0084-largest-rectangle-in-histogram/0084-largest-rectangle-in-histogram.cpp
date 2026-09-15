class Solution {
private:
    vector<int> fnse(vector<int>& arr){
        int n=arr.size();
        vector<int> ans(n,n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            ans[i]=!st.empty()?st.top():n;
            st.push(i);
        }
        return ans;
    }
    vector<int> fpse(vector<int>& arr){
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            ans[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& arr) {
        vector<int> nse=fnse(arr);
        vector<int> pse=fpse(arr);
        int largest=0,area;
        for(int i=0;i<arr.size();i++){
            area=arr[i]*(nse[i]-pse[i]-1);
            largest=max(largest,area);
        }
        return largest;

    }
};