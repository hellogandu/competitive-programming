// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// Example:

// Input: [-2,1,-3,4,-1,2,1,-5,4],
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

//========================================================================================

let maxnum = (num , max)=> num< max ?max:num;

var maxSubArray = function(nums) {
   let max = nums[0];
   let current=nums[0];
  for(let i=1;i<nums.length;i++){

    current = maxnum(nums[i] , current + nums[i]);
    max = maxnum(current , max);
    
  }  
  return max;
};