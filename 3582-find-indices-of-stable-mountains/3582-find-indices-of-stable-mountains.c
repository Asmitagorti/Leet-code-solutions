/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int*arr=(int*)malloc(heightSize*sizeof(int));
    int index=0;
    for(int i=1;i<heightSize;++i){
        if(height[i-1]>threshold){
            arr[index++]=i;
        }
    }
    *returnSize=index;
    return arr;
}