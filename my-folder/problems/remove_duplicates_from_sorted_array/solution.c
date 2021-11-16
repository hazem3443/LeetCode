

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) { return 0;}
    int j = 1;
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] != nums[i + 1])
            nums[j++] = nums[i + 1];
    }
    return j;
}