// Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

// Example:

// Input: 

// 1 0 1 0 0
// 1 0 1 1 1
// 1 1 1 1 1
// 1 0 0 1 0

// Output: 4

//================================================================================================

var maximalSquare = function(matrix) {
  const m = matrix.length;
  if (m === 0) return 0;
  const n = matrix[0].length;  
  let max = 0;
  let dp = Array.from({length : m + 1 } ,(v ,i)=>{
  return Array.from({length : n + 1}, (v, i)=>0);
});  
  for (let i = 1; i <= m; i++) {
      for (let j = 1; j <= n; j++) {
          if (matrix[i - 1][j - 1] === '1') {
              const min = Math.min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
              dp[i][j] = min + 1;
              max = Math.max(max, dp[i][j]);
          } else {
              dp[i][j] = 0;
          }        
      }
  }
  return max * max;
};