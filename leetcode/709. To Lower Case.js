// Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

// Example 1:

// Input: "Hello"
// Output: "hello"
// Example 2:

// Input: "here"
// Output: "here"
// Example 3:

// Input: "LOVELY"
// Output: "lovely"

// /**
//  * @param {string} str
//  * @return {string}
//  */

//First Approach
var toLowerCase = function(str) {
  return str.split('').reduce((acc , cv)=>{
      if(cv.charCodeAt() >=65 && cv.charCodeAt()<=90){ acc+= String.fromCharCode(cv.charCodeAt() + 32);}
      else{acc+=cv};
      return acc;
  },acc='');
};

//Secound Approach
var toLowerCase = function(str) {
  str = str.split('');
  for(let i=0;i<str.length;i++){
    if(str[i].charCodeAt()>=65 && str[i].charCodeAt()<=90){
      str[i] = String.fromCharCode(str[i].charCodeAt() + 32); }   
  }
   return str.join('');
};