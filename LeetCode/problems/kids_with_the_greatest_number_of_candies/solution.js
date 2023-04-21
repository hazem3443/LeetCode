/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    var maxs=Math.max.apply(null,candies)
    return candies.map((a)=>a+extraCandies >= maxs ) 

    }