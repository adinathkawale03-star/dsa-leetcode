class Solution {
public:
    bool isHappy(int n) {
        set<int> adin;
//we can use the set becuase in the calculation create the cycle again and again same number appeared it give me the tle
        while(n != 1) {
            if(adin.count(n)) {
                return false;
            }
            adin.insert(n);
            int x = n;
            int sum = 0;
            while(x > 0) {
                sum += (x % 10) * (x % 10);
                x = x / 10;
            }
            n = sum;
        }
        return true;
    }
};