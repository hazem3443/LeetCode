
// void swapByReference(int *x, int *y);

// void rotate(int* nums, int numsSize, int k){

//     for (int iter = 0; iter < k; iter++)
//     {
//         for (int i = numsSize - 2; i >= 0; i--)
//         {
//             swapByReference(nums + i, nums + i + 1);
//         }
//     }
// }

// void swapByReference(int *x, int *y)
// {
//     int temp=*y;
//     *y = *x;
//     *x = temp;
// }

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void rotate_array(int* begin, int* end)
{
    while(begin < end) {
        swap(begin++, --end);
    }
}

void rotate(int* nums, int numsSize, int k)
{
    k = numsSize - k % numsSize;
    rotate_array(nums, nums + k);
    rotate_array(nums + k, nums + numsSize);
    rotate_array(nums, nums + numsSize);
}