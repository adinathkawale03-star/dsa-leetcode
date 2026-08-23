class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size();
        if(n<3){
            return {};
        }
        vector<int> ans;
        for(int i=1;i<(n-1);i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
//tc:o(n-2);
//sc:o(n-2);