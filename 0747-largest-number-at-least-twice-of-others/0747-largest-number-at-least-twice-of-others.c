int dominantIndex(int* nums, int numsSize) {
    int maxi=-1;
    int ind=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>maxi){
            maxi=nums[i];
            ind=i;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(i!=ind && 2*nums[i]>maxi){
            return -1;
        }
    }
    return ind;
}