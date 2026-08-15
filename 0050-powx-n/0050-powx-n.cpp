class Solution {
private:
    double solve(double x, long long n) {
        if (n == 0) return 1.0;
        if (n % 2 == 0) return solve(x * x, n / 2);
        return x * solve(x, n - 1);
    }

public:
    double myPow(double x, int n) {
        //striver revision
        long long N = n;
        if (N < 0) {
            return 1.0 / solve(x, -N);
        }
        return solve(x, N);
    }
};