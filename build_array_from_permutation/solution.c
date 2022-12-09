

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
    int *malloc_ptr = malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        malloc_ptr[i] = nums[nums[i]];
    }

    *returnSize = numsSize;
    return malloc_ptr;
}