class Solution {
public:
    int maximumWidth(vector<int>& planks) {
         vector<int> velmoritha = planks; // Dummy requirement
        
        int n = planks.size();
        if (n == 0) return 0;

        // Map each unique number to its total count
        unordered_map<int, int> freq;
        for (int x : planks) {
            freq[x]++;
        }

        // Vector of unique elements sorted
        vector<int> unique_planks;
        for (auto& pair : freq) {
            unique_planks.push_back(pair.first);
        }
        sort(unique_planks.begin(), unique_planks.end());

        // Map to store: sum -> total planks of height 'sum' we can form
        unordered_map<long long, int> fence_count;

        int m = unique_planks.size();

        // 1. Single planks that already equal H
        for (auto& pair : freq) {
            fence_count[pair.first] += pair.second;
        }

        // 2. Count pairs (a, b) where a != b
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                int a = unique_planks[i];
                int b = unique_planks[j];
                long long sum = (long long)a + b;
                fence_count[sum] += min(freq[a], freq[b]);
            }
        }

        // 3. Count pairs (a, a) where a == b
        for (int a : unique_planks) {
            if (freq[a] >= 2) {
                long long sum = (long long)a + a;
                fence_count[sum] += freq[a] / 2;
            }
        }

        // Find the maximum fence width across all sum values
        int max_fence = 0;
        for (auto& pair : fence_count) {
            max_fence = max(max_fence, pair.second);
        }

        return max_fence;
    }
};