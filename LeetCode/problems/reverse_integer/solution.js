/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
 if(x<0) k=-1*x; 
 else k = x;


 if(k < 10) return k; 
 digit = k-(Math.floor(k/10)*10); 
  log=Math.ceil(Math.log(k+1)/Math.log(10));
 res = (digit*Math.pow(10,log-1))+reverse(Math.floor(k/10)); return(res<(-1*Math.pow(2,31)) ||(res>Math.pow(2,31)-1))?0:(x<0)?(-1*res ):res;
    };