class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
      if(k==0){
            return {};
      }
      vector<int> a;
      int cnt=0;
      int a2=nums[0];
      for(int i=0;i<nums.size();i++){
        if(nums[i]==a2 && cnt<k){
            cnt++;
            a.push_back(nums[i]);
        }
        else if(nums[i]==a2){
            cnt++;
            continue;
        }
        else{
            cnt=1;
            a.push_back(nums[i]);
            a2=nums[i];
        }
      }
      return a;
    }
};