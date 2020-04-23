// Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

// Example 1:
// Input:nums = [1,1,1], k = 2
// Output: 2
// Note:
// The length of the array is in range [1, 20,000].
// The range of numbers in the array is [-1000, 1000] and the range of the integer k is [-1e7, 1e7].


//=================================================================================================

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

//  o(N^2) solution
var subarraySum = function(nums, k) {
  let counter = 0;
  for(let i=0;i< nums.length;i++){
      let sum = nums[i];
      if(sum===k){
       counter+=1;
      }
      for(let j=i+1; j<nums.length;j++){
          sum += nums[j];
          if(sum===k){ 
             counter+=1;   
          }
      }
  }
   return counter;
};