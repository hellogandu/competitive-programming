// Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

// Examples:

// s = "leetcode"
// return 0.

// s = "loveleetcode",
// return 2.
// Note: You may assume the string contain only lowercase letters.
//==============================================================================================
/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
  let obj = {};
  for(let i=0;i<s.length;i++){
      if(obj[s[i]]){
          obj[s[i]] = "NO";
      } else{
          obj[s[i]] = i + "";
      }
  }
  console.log(obj);
  for(key in obj){
       if(obj[key] !== "NO"){
           return obj[key];
       }
  }
  return -1;
};