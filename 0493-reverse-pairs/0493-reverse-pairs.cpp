class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int high){
        vector<int> temp;
        int left=low,right=mid+1;
        while(left<=mid && right<=high){
            if(nums[right]<nums[left]){
                temp.push_back(nums[right]);
                right++;
            }
            else{
                temp.push_back(nums[left]);
                left++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
    int count(vector<int>& nums,int low,int mid,int high){
        int right=mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && (long long)nums[i]>(long long)nums[right]*2){
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    int help(vector<int>& nums,int low,int high){
        if(low>=high){return 0;}
        int cnt=0;
        int mid=low+((high-low)/2);
        cnt+=help(nums,low,mid);
        cnt+=help(nums,mid+1,high);
        cnt+=count(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
      int n=nums.size();
      return help(nums,0,n-1);
    }
};
//tc:o(nlogn )
//sc:o(n)