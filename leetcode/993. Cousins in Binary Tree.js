// In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

// Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

// We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

// Return true if and only if the nodes corresponding to the values x and y are cousins.

 

// Example 1:


// Input: root = [1,2,3,4], x = 4, y = 3
// Output: false
// Example 2:


// Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
// Output: true
// Example 3:



// Input: root = [1,2,3,null,4], x = 2, y = 3
// Output: false
 

// Note:

// The number of nodes in the tree will be between 2 and 100.
// Each node has a unique integer value from 1 to 100.
//=================================================================================================

var isCousins = function(root, x, y) {
  const xPath = [];
  // find x path
  constructPath(root, x, xPath);
  
  const yPath = [];
  // find y path
  constructPath(root, y, yPath);
  
  if (xPath.length != yPath.length) {
      return false;
  }
  
  // The difference of the depth of x/y and where they diverge should be > 1 to know they have different parents
  let pathDivergeDepth = xPath.length;
  for(let i = 0; i < xPath.length; i++) {
      if (xPath[i] != yPath[i]) {
          pathDivergeDepth = i;
          break;
      }
  }
  
  return xPath.length - pathDivergeDepth > 1;
};

const constructPath = function(node, val, path) {
  if (node == null) {
      return false;
  }
  
  path.push(1); // 1 for left
  if (!constructPath(node.left, val, path)) {
      path.pop();
  } else {
      return true;
  }
  
  if(node.val == val) {
      return true;
  }
  
  path.push(0); // 0 for right
  if (!constructPath(node.right, val, path)) {
      path.pop();
  } else {
      return true;
  }
}