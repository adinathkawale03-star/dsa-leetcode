class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;

        k %= total;

        vector<int> temp(total);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int idx = i * n + j;
                temp[(idx + k) % total] = grid[i][j];
            }
        }

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < total; i++) {
            ans[i / n][i % n] = temp[i];
        }

        return ans;
    }
};