class Solution {
private: int count(vector<int>& nums,int p){
    int cnt=0;
    int st=1;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(cnt+nums[i]<=p){
            cnt+=nums[i];
        }
        else{
            st++;
            cnt=nums[i];
        }
    }
    return st;
}
public:
    int splitArray(vector<int>& nums, int k) {
        //problem statement of these problem are the we can have any type of array such as cow,book , painter etc. we given the number spilit the array . so the number can contain 
        //at least one entity and  the other are the contigous part of the array for the every entity they are the condition for it .  and the item in the array we can distribute to
        //any one of them not the multiple. in the splited array we can take the maximum from each permutation in the splited array and return the minimium from it.
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
       // if(k==1 || k==n){return low;}
        if(k>n){return  -1;}
        while(low<=high){
            int mid=low+((high-low)/2);
            int subpart=count(nums,mid);
            if(subpart>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};