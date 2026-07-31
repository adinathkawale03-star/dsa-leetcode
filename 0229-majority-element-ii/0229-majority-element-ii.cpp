class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //it is optimal approch for these problem but in these one problem are there they uses more space
      vector<int> result;
      unordered_map<int,int> help;
      for(int i:nums){
           help[i]++;
           if((help[i]>nums.size()/3) && (find(result.begin(), result.end(), i) == result.end())){
            result.push_back(i);
           }
      }
      return result;
    }
};