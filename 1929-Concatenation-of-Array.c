int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int* res = (int*)malloc(sizeof(int) * numsSize*2);
    *returnSize = 2 * numsSize;
    for (int i = 0; i < numsSize; i++) {
        res[i] = res[i+numsSize] = nums[i];
    }
    return res;
}