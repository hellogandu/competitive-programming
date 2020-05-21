// Runtime: 60 ms, faster than 48.41% of JavaScript online submissions for Two Sum II - Input array is sorted.
// Memory Usage: 35.3 MB, less than 26.09% of JavaScript online submissions for Two Sum II - Input array is sorted.

//=======================================================================================

/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let l=0 ,r= nums.length-1;
    while(l<r){
        if(nums[l]+nums[r] == target){
          return [l+1 , r+1];
        }else{
            if(nums[l]+nums[r] < target){
                l+=1;
            }else{
                r-=1;
            }
        }
    
    }
};