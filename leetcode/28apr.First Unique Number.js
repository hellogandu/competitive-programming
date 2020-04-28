// You have a queue of integers, you need to retrieve the first unique integer in the queue.

// Implement the FirstUnique class:

// FirstUnique(int[] nums) Initializes the object with the numbers in the queue.
// int showFirstUnique() returns the value of the first unique integer of the queue, and returns -1 if there is no such integer.
// void add(int value) insert value to the queue.

// example : 1
// Input: 
// ["FirstUnique","showFirstUnique","add","showFirstUnique","add","showFirstUnique","add","showFirstUnique"]
// [[[2,3,5]],[],[5],[],[2],[],[3],[]]
// Output: 
// [null,2,null,2,null,3,null,-1]

// Explanation: 
// FirstUnique firstUnique = new FirstUnique([2,3,5]);
// firstUnique.showFirstUnique(); // return 2
// firstUnique.add(5);            // the queue is now [2,3,5,5]
// firstUnique.showFirstUnique(); // return 2
// firstUnique.add(2);            // the queue is now [2,3,5,5,2]
// firstUnique.showFirstUnique(); // return 3
// firstUnique.add(3);            // the queue is now [2,3,5,5,2,3]
// firstUnique.showFirstUnique(); // return -1

//example : 2
Input: 
// ["FirstUnique","showFirstUnique","add","add","add","add","add","showFirstUnique"]
// [[[7,7,7,7,7,7]],[],[7],[3],[3],[7],[17],[]]
// Output: 
// [null,-1,null,null,null,null,null,17]

// Explanation: 
// FirstUnique firstUnique = new FirstUnique([7,7,7,7,7,7]);
// firstUnique.showFirstUnique(); // return -1
// firstUnique.add(7);            // the queue is now [7,7,7,7,7,7,7]
// firstUnique.add(3);            // the queue is now [7,7,7,7,7,7,7,3]
// firstUnique.add(3);            // the queue is now [7,7,7,7,7,7,7,3,3]
// firstUnique.add(7);            // the queue is now [7,7,7,7,7,7,7,3,3,7]
// firstUnique.add(17);           // the queue is now [7,7,7,7,7,7,7,3,3,7,17]
// firstUnique.showFirstUnique(); // return 17

// Constraints:
// 1 <= nums.length <= 10^5
// 1 <= nums[i] <= 10^8
// 1 <= value <= 10^8
// At most 50000 calls will be made to showFirstUnique and add.

//==================================================================================================

/**
 * @param {number[]} nums
 */
var FirstUnique = function(nums) {
  this.mapObj = {};
  this.arr = []; 
   this.head = 0;
   for(let i=0;i<nums.length;i++){ 
       if(this.mapObj[nums[i]]){
           this.mapObj[nums[i]] += 1;
       }else{
           this.mapObj[nums[i]] = 1;
       }
       if(this.mapObj[nums[i]] == 1){
           this.arr.push(nums[i]);
       }
   }
};
/**
* @return {number}
*/
FirstUnique.prototype.showFirstUnique = function() {
    for(let i=this.head;i<this.arr.length;i++){
        if(this.mapObj[this.arr[i]] == 1){
            this.head = i;
            return this.arr[this.head];
        }
    } 
   this.head = this.arr.length;
   return -1;
};

/** 
* @param {number} value
* @return {void}
*/
FirstUnique.prototype.add = function(value) {  
   if(this.mapObj[value]){
           this.mapObj[value] += 1 ;
       }else{
           this.mapObj[value] = 1;
       }
       if(this.mapObj[value] == 1){
           this.arr.push(value);
       }
};

/** 
* Your FirstUnique object will be instantiated and called as such:
* var obj = new FirstUnique(nums)
* var param_1 = obj.showFirstUnique()
* obj.add(value)
*/

