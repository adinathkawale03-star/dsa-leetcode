class Solution {
public:
    int maxProduct(int n) {
        //brute force approch
       int maxi=INT_MIN;
       int maxi2=INT_MIN;
       int digit;
       while(n>0){
        digit=n%10;
        if(digit>=maxi){
            maxi2=maxi;
            maxi=digit;
        }
        else if(maxi>digit && digit>=maxi2){
            maxi2=digit;
        }
        n=n/10;
       }
       return maxi*maxi2;

    }
};