/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let customer_welth, maxwelth=0;
    for(let i = 0;i<accounts.length;i++){
        customer_welth=0;
        for(let j = 0 ;j<accounts[i].length;j++){
            customer_welth += accounts[i][j]
        }
        if(maxwelth<customer_welth) (maxwelth=customer_welth);
    }
    return maxwelth
};