class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeateadly;
        int n=nums.size();
        vector<int> arr(n+1,0);
        for(int i:nums){
            arr[i]++;
            if(arr[i]>1){
                repeateadly=i;
            }
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==0){
                return {repeateadly,i};
            }
        }
        return {0,0};

    }
};