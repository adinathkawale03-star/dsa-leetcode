class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int j;
            for (j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] < target) {
                    maxi++;
                } else {
                    break; 
                }
            }
            if(j==i+1){
                break;
            }
        }
        return maxi;
    }
};