/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    let counts=0, obj={};

    for(let i = 0 ;i<nums.length;i++){
        if(obj[nums[i]]){
            counts+=obj[nums[i]]++;
        }else obj[nums[i]]=1
    }
    return counts;
};