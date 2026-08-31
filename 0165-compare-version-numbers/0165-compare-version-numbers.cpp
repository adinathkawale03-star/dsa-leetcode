class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0;
        int j = 0;
        int n1 = version1.length();
        int n2 = version2.length();
        while (i < n1 || j < n2) {
            long long num1 = 0;
            long long num2 = 0;//we can use the long long because the maximum size of them are the 500 it would not be stored in int
            while (i < n1 && version1[i] != '.') {
                num1 = num1 * 10 + (version1[i] - '0');
                i++;
            }
            while (j < n2 && version2[j] != '.') {
                num2 = num2 * 10 + (version2[j] - '0');
                j++;
            }
            if (num1 < num2) return -1;
            if (num1 > num2) return 1;
            i++;
            j++;//if the two numbers are equal before the decimal then the loop start again for that calculate in such away that the 0 will be not considered trailing 
        } 
        return 0;
    }
};
//tc: o(n1+n2)
//sc : o(1)//because we create a number for that not the string or other data type