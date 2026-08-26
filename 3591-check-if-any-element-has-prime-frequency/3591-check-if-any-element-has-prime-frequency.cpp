class Solution {
public:
    bool isprime(int x) {
        if (x < 2) return false;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) return false;
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> num11(101, 0);
        for (int x : nums) {
            num11[x]++;
        }
        for (int i = 0; i < 101; i++) {
            if (isprime(num11[i])) {
                return true;
            }
        }
        return false;
    }
};