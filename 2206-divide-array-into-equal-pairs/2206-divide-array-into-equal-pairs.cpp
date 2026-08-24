class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int freq[501];
        for(int i:nums){
            freq[i]++;
        }
        for(int i=1;i<=500;i++){
            if(freq[i]%2==1){
                return false;
            }
        }
        return true;
        //tc:o(n):nearly , sc: o(1) nearly becuase the 501 is very small number 
    }
};