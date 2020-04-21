// Return the root node of a binary search tree that matches the given preorder traversal.

// (Recall that a binary search tree is a binary tree where for every node, any descendant of node.left has a value < node.val, and any descendant of node.right has a value > node.val.  Also recall that a preorder traversal displays the value of the node first, then traverses node.left, then traverses node.right.)

 

// Example 1:

// Input: [8,5,1,7,10,12]
// Output: [8,5,10,1,7,null,12]

 

// Note: 

// 1 <= preorder.length <= 100
// The values of preorder are distinct.

//==========================================================================================

class Node{
  constructor(val){
   this.val = val;
    this.left = null;
    this.right = null;
    return this;
  }
}

class BST{
  constructor(val){
    this.head = new Node(val);
  }
  insertValue(val){
    let temp = this.head;
    let node = new Node(val); 
    while(true){
    if(val<temp.val){
      if(temp.left==null){
        temp.left = node;
        return
      }else{
      temp = temp.left;
      }
    }else{
     if(temp.right == null){
      temp.right = node;
       return;
     }else{
       temp = temp.right;
     }
    }   
    } 
  }
  BstTree(){
    return this.head;
  }
  
}


var bstFromPreorder = function(arr) {
  let tree = new BST(arr[0]); 
  for(let i=1;i<arr.length;i++){
    tree.insertValue(arr[i]);
  }
   return tree.BstTree();
};

