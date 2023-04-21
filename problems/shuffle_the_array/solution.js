/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let total=(n*2)-1, i=1;
    while(n<total ){
        nums.splice(i,0,nums[n]) //insert
        nums.splice(++n,1) //delete inserted element
        i+=2
    }
    return nums;
};