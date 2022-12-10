

bool containsDuplicate(int* nums, int numsSize){
    int numsFound[65536] = {0};
    for (int i = 0; i < numsSize; i++) {
        if (numsFound[(nums[i] + 1000000000) % 65536]++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
    }
    return false;
}