// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// push(x) -- Push element x onto stack.
// pop() -- Removes the element on top of the stack.
// top() -- Get the top element.
// getMin() -- Retrieve the minimum element in the stack.
 

// Example:

// MinStack minStack = new MinStack();
// minStack.push(-2);
// minStack.push(0);
// minStack.push(-3);
// minStack.getMin();   --> Returns -3.
// minStack.pop();
// minStack.top();      --> Returns 0.
// minStack.getMin();   --> Returns -2.

//===============================================================
var MinStack = function() {
  this.arr = [];
  this.minValueArr = [];
  this.minValueArr[-1] = Infinity;
  this.topPointer = -1;
};
let checkMinValue =(x , y)=>{
return x>y?y:x;
}

MinStack.prototype.push = function(x) {
 this.topPointer +=1   
 this.arr[this.topPointer] = x;
 this.minValueArr[this.topPointer] = checkMinValue(x,this.minValueArr[this.topPointer-1]);
};

MinStack.prototype.pop = function() {
this.topPointer-=1;
};

MinStack.prototype.top = function() {
 return this.arr[this.topPointer];
};

MinStack.prototype.getMin = function() {
  return  this.minValueArr[this.topPointer];
};