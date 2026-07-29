class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int n=arr.length;
        
        int max=Math.min(arr[0],arr[n-1]);
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                max=i+1;
            }
        }
        return max;
    }
}