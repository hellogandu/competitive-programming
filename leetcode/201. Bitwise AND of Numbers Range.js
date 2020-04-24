// Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

// Example 1:

// Input: [5,7]
// Output: 4
// Example 2:

// Input: [0,1]
// Output: 0

//==============================================================================================

function MSDfind(num){
  let count = 0;
  while(num){
    num = num>>1;
    count++;
  }
  return count;
}

var rangeBitwiseAnd = function(m, n) {
  let ans = 0;
  while(true){
      let msdPostitionOfM = MSDfind(m);
      let msdPostitionOfN = MSDfind(n)
      if(msdPostitionOfM && msdPostitionOfM ===msdPostitionOfN){
        let msdActiveBit = Math.pow(2 , msdPostitionOfM-1);
        ans += msdActiveBit;
        m = m - msdActiveBit;
        n = n - msdActiveBit;      
      }else{
        return ans
      }
  }
 
};