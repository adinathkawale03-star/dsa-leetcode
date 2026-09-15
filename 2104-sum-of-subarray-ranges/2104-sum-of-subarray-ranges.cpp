
class Solution {
private:
    vector<int> fnse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> fpse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> fnge(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> fpge(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    long long fss(vector<int>& nums) {
        int n = nums.size();
        vector<int> nse = fnse(nums);
        vector<int> pse = fpse(nums);
        
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;
            long long freq = left * right;
            sum += freq * nums[i];
        }
        return sum;
    }
    long long fms(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge = fnge(nums);
        vector<int> pge = fpge(nums);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - pge[i];
            long long right = nge[i] - i;
            long long freq = left * right;
            sum += freq * nums[i];
        }
        return sum;
    }
public:
    long long subArrayRanges(vector<int>& nums) {
        long long maxi = fms(nums);
        long long mini = fss(nums);
        return maxi - mini;
    }
};