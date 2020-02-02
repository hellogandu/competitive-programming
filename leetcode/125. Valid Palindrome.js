// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Note: For the purpose of this problem, we define empty string as valid palindrome.

// Example 1:

// Input: "A man, a plan, a canal: Panama"
// Output: true

// Example 2:

// Input: "race a car"
// Output: false

// /**
//  * @param {string} s
//  * @return {boolean}
//  */
var isPalindrome = function(s) {
  s = returnValidString(s.toUpperCase());
 let str = returnValidString(s);
 return str.split("").reverse().join("") == s;
};
function returnValidString(str){
return str.split('').reduce((acc ,cv)=>{
    if((cv.charCodeAt()>=65 && cv.charCodeAt()<=90)||(cv.charCodeAt()>=48 && cv.charCodeAt()<=57)){
        acc+=cv;
    }
    return acc;
},acc='');
}