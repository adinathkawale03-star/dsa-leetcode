class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int count=0,digit;
            while(num>0){
                digit=num%10;
                count+=digit;
                num=num/10;
            }
            num=count;
        }
        return num;
    }
};