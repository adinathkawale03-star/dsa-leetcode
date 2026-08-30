/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    if(matrixSize==0 || matrixColSize[0]==0){
        *returnSize=1;
        return NULL;
    }
    int top=0;
    int bottom=matrixSize-1;
    int left=0;
    int right=matrixColSize[0]-1;
    int total=matrixSize*matrixColSize[0];
    *returnSize=total;
    int* val=(int*)malloc(total*sizeof(int));
    int l=0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            val[l]=matrix[top][i];
            l++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            val[l]=matrix[i][right];
            l++;
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                val[l]=matrix[bottom][i];
                l++;
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                val[l]=matrix[i][left];
                l++;
            }
            left++;
        }
    }
    return val;
}