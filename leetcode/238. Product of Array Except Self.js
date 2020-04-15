// Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

// Example:

// Input:  [1,2,3,4]
// Output: [24,12,8,6]
// Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

// Note: Please solve it without division and in O(n).

// Follow up:
// Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)

//=======================================================================================
var productExceptSelf = function(nums) {
  let mulOfHoleArray = 1;
  let countOfZero = 0;
  for(let i=0;i<nums.length;i++){
    if(nums[i]==0){
      countOfZero +=1; 
    }
    if(nums[i] !== 0){
    mulOfHoleArray *= nums[i];
    }
  }
  let ans = new Array();
  for(let i=0;i<nums.length;i++){
    if(countOfZero>1){
      ans.push(0);
    }else if(countOfZero>0){
        if(nums[i]==0){ans.push( mulOfHoleArray);}
        else{ans.push(0);}
    }else{
      ans.push( mulOfHoleArray/nums[i]);
    }
  }
  
  return ans
};