// In Pascal's triangle, each number is the sum of the two numbers directly above it.

// Example:

// Input: 5
// Output:
// [
//      [1],
//     [1,1],
//    [1,2,1],
//   [1,3,3,1],
//  [1,4,6,4,1]
// ]

//================================================================

var generate = function(num) {
  let ans=[];
 for(let i=0;i<num;i++){
   let a=[];
   for(let j=0;j<=i;j++){
    if(j===0 || j===i){
      a.push(1);
    }else{
      a.push(ans[i-1][j-1] + ans[i-1][j])
    }
   }
   ans.push(a);
 }
  return ans;
};