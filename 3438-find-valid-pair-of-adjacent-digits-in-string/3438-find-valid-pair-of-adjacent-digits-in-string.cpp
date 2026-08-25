class Solution {
public:
    string findValidPair(string s) {
        int freq[10] = {0};
        for (char ch : s) {
            freq[ch - '0']++;//ch are belonging to the 1 to 9 not consist of the 0
        }
        for (int i = 0; i < s.size() - 1; i++) {
            int first = s[i] - '0';
            int second = s[i + 1] - '0';
            if (first != second && freq[first] == first && freq[second] == second) {
                return s.substr(i, 2);
            }
        }
        return "";
    }
};