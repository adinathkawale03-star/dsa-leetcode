class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       if(n==0){return 0;}
       if(n==1){return 1;} 
       sort(nums.begin(),nums.end());
       int count=0;
       int largest=1;
       int smaller=nums[0]-1;
       for(int i=0;i<n;i++){
        if(nums[i]-1==smaller){
            count++;
            smaller=nums[i];
        }
        else if(nums[i]==smaller){
            continue;
        }
        else if(nums[i]!=smaller){
            count=1;
            smaller=nums[i];
        }
        largest=max(count,largest);
       } 
       return largest;
    }
};