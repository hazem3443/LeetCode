
#include <math.h>
int findNumbers(int* nums, int numsSize){
    int i=0, cnt=0;
    for(;i<numsSize;i++)
        if(( ((int)( (log(nums[i])/log(9.9999))+1))%2)==0) cnt++;

    return cnt;
}