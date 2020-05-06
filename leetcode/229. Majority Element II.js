// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// Note: The algorithm should run in linear time and in O(1) space.

// Example 1:

// Input: [3,2,3]
// Output: [3]
// Example 2:

// Input: [1,1,1,3,3,2,2,2]
// Output: [1,2]

//================================================================================================
var majorityElement = function(nums) {
  if(nums.length === 0){
      return []
  }
  let res1 = 0,
      res2 = 0,
      count1 = 0,
      count2 = 0,
      len = Math.floor(nums.length/ 3);
  
  for(let num of nums){
      if(num === res1){
          count1 ++
      }
      else if(num === res2){
          count2 ++
      }
      else if(count1 === 0){
          res1 = num
          count1 = 1
      }
      else if(count2 === 0){
          res2 = num
          count2 = 1
      }
      else{
          count1 --
          count2 --
      }
  }
  let res = []
  if(nums.filter((a) => a === res1).length > len){
      res.push(res1)
  }
  if(res2 != res1 && nums.filter((a) => a === res2).length > len){
      res.push(res2)
  }
  return res
  
};