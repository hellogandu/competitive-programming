// Given a positive integer num, write a function which returns True if num is a perfect square else False.

// Note: Do not use any built-in library function such as sqrt.

// Example 1:

// Input: 16
// Output: true
// Example 2:

// Input: 14
// Output: false

//================================================================================================

/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function(num) {
  let l = 0 , r = num
   let mid , sqr;
  while(l<=r){
      mid = Math.floor(l + (r-l)/2);
      sqr = mid * mid;
   if( sqr == num){
       return true;
   }else{
       if(sqr>num){
           r = mid - 1; 
       }else{
           l = mid + 1;
       }
   }
  }
   return false;
};