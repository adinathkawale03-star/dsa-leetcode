class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxi=0,n=fruits.size();
        unordered_map<int,int> a;
        while(r<n){
            a[fruits[r]]++;
            if(a.size()>2){
                a[fruits[l]]--;
                if(a[fruits[l]]==0){
                    a.erase(fruits[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};