class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = 0, missing = 0;
        
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i+1]){ 
                duplicate = nums[i]; 
            }
        }

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;
        
        for(int i = 0; i < n; i++) {
            actualSum += nums[i];
        }
        
        missing = expectedSum - (actualSum - duplicate);

        return {duplicate, missing};
    }
};