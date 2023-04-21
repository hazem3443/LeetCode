

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swapByReference(int *x, int *y)
{                 // O(3) -- S(0)
    *x = *y + *x; // x= x+y
    *y = *x - *y; // y = x+y-y = x
    *x = *x - *y; // x = x+y-x = y
}

int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    int *ret_array;
    ret_array = (int *)malloc(*returnSize * sizeof(int));
    int flag = 0;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            ret_array[i] = 0;
            if (i == 0)
                flag = 1;

            else
                continue;
        }
        else
        {
            ret_array[i] = ++digits[i];
            while (i-- > 0)
                ret_array[i] = digits[i];

            break;
        }
    }
    if (flag == 1)
    {
        (*returnSize)++;
        ret_array = (int *)realloc(ret_array, (*returnSize * sizeof(int)));
        ret_array[((*returnSize) - 1)] = 1;
        swapByReference(ret_array, ret_array + *returnSize - 1);
    }

    return ret_array;
}