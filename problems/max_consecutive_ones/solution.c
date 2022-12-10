

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int max_consec_ones = 0, count_tracer = 0;
    int i=0;
    for(;i<numsSize;i++){
        if(nums[i])
            count_tracer++;
        if(!nums[i] || i== numsSize-1) {
            if(max_consec_ones<count_tracer) max_consec_ones=count_tracer;
            count_tracer=0;
        }
    }
    return max_consec_ones;
}