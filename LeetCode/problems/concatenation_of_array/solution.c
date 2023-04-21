

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize * 2;
    int *ptr = malloc(numsSize * 2 * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        ptr[i] = nums[i];
        ptr[i + numsSize] = nums[i];
    }
    return ptr;
}