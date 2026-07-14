class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> hash;
        int n=numbers.size();
        int ans1;
        int ans2;
        int num;
        for(int i=0;i<n;i++){
            num=target-numbers[i];
            if(hash.find(num)!=hash.end()){
                ans1=hash[num];
                ans2=i;
                break;
            }
            hash[numbers[i]]=i;
        }
        return {ans1+1,ans2+1};
    }
};