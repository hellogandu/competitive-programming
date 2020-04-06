// Given an array of strings, group anagrams together.

// Example:

// Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
// Output:
// [
//   ["ate","eat","tea"],
//   ["nat","tan"],
//   ["bat"]
// ]

//====================================================================================

var groupAnagrams = function(arr) {
  let original = arr.slice();
  for(let i=0;i<arr.length;i++){
    arr[i] =  arr[i].split("").sort((a, b)=>a.charCodeAt()-                   b.charCodeAt()).join("")
  } 
  let ans = [];
    
  for(let i=0;i<arr.length;i++){
    if(arr[i]===false){continue;}
    let g = [original[i]];
    for(let j=i+1;j<arr.length;j++){
      if(arr[i]===arr[j]){
        g.push(original[j]);
        arr[j]=false;
      }
    }
    ans.push(g);
  }
  return ans; 
};