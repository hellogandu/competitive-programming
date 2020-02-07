// Count the number of prime numbers less than a non-negative number, n.

// Example:

// Input: 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

// /**
//  * @param {number} n
//  * @return {number}
//  */
var countPrimes = function(n) {
  if(n<=0){return 0;}
  let c = 0;
  for(let i=2;i<n;i++){
  if(check(i)){c+=1;}
  }
  return c;
};
function check(n){
 for(let i = 2; i <= Math.sqrt(n) ; i++){
     if(n%i==0){return false;}
 } 
  return true;
}