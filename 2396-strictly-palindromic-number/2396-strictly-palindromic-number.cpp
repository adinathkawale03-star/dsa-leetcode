class Solution {
public:
    string convert(int n, int base) {
        string s = "";
        while (n > 0) {
            s += (n % base) + '0';
            n /= base;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for (int base = 2; base <= n - 2; base++) {
            if (!isPalindrome(convert(n, base)))
                return false;
        }
        return true;
    }
};