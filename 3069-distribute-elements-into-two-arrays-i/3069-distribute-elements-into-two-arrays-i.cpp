class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
       vector<int> ans1={nums[0]};
       vector<int> ans2={nums[1]};
       vector<int> ans;
       int n=nums.size();
       for(int i=2;i<nums.size();i++){
           if(ans1.back()>ans2.back()){
            ans1.push_back(nums[i]);
           }
           else{
            ans2.push_back(nums[i]);
           }
       }
       for(int i:ans1){
        ans.push_back(i);
       }
       for(int i:ans2){
        ans.push_back(i);
       }
       return ans;
    }
};
//tc:o(2*n) == o(n)
//sc:o(2*n) == o(n)