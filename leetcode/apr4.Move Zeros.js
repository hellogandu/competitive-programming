// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example:

// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Note:

// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.

var moveZeroes = function(nums) {
  if(!nums.length) return;
  let l = 0;
  for(let i=1;i<nums.length;i++){
    if(nums[l]==0 && !nums[i]==0){
      nums[l]=nums[i];
      nums[i]=0;
      l++;
    } else if(nums[l]!==0){l++;}
  }
};