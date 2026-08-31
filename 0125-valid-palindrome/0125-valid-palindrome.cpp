class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (left < right && (s[left]<65 || s[left]>122 || (s[left]>90 && s[left]<97)) && !(s[left]>47 && s[left]<58)) {
                left++;
            }
            while (left < right &&  (s[right]<65 || s[right]>122 || (s[right]>90 && s[right]<97)) && !(s[right]>47 && s[right]<58)) {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }            
            left++;
            right--;
        }
        return true;
    }
};