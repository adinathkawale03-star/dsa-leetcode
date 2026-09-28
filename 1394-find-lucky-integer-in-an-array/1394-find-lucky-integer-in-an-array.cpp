class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> fre(501,0);
        int n=arr.size();
        for(int i=0;i<n;i++){
            fre[arr[i]]++;
        }
        for(int i=500;i>=1;i--){
            if(i==fre[i]){return i;}
        }
        return -1;
    }
};