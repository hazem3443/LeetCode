/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    let numcount = [];
    for(i=0;i<nums.length;i++){
        counts=0;
        for(j=0;j<nums.length;j++){
            if(i==j) continue;
            if(nums[i] > nums[j]) counts++
        }
        numcount.push(counts);
    }
    return numcount
};