
void SortBubbly(int *x, int len, bool asc);
void swapByReference(int *x, int *y);

int maxProfit(int* prices, int pricesSize){
    int difs[pricesSize];
    for (int i = 0; i < pricesSize; i++)
        difs[i] = 0;
    for (int i = 0; i < pricesSize - 1; i++)
        difs[i] = prices[i + 1] - prices[i];

    SortBubbly(difs, pricesSize - 1, 0);
    for (int i = 0; i < pricesSize; i++)
    {
        printf("x = %i\n", difs[i]);
    }

    int res = 0;
    for (int i = 0; i < pricesSize; i++)
        if (difs[i] == 0)
            break;
        else if (difs[i] > 0)
            res += difs[i];

    return res;
}

void swapByReference(int *x, int *y)
{                 // O(3) -- S(0)
    *x = *y + *x; // x= x+y
    *y = *x - *y; // y = x+y-y = x
    *x = *x - *y; // x = x+y-x = y
}

void SortBubbly(int *x, int len, bool asc)
{
    for (size_t j = 0; j < len; j++)
    {
        for (size_t i = 0; i < len - j - 1; i++)
        {
            if (asc == 1)
            {
                if (x[i] > x[i + 1])
                    swapByReference(x + i, x + (i + 1));
            }
            else
            {
                if (x[i] < x[i + 1])
                    swapByReference(x + i, x + (i + 1));
            }
            // printf("arr[%lu] = %i\n", i, x[i]);
        }
        // printf("------\n");
    }
}