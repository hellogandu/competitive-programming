let input = [1, 10 , 7, 9  , 0 , 7 , 5, 7 , -1 , 3];
const target = 10;

//===========================================================
// Time complexity O(n*logN) 
// space complexity O(1);

function twoNumberSum(){
  let array = input.slice().sort((a , b)=>a-b);
  let output = [];
  let leftPointer = 0;
  let rightPointer = array.length -1;

  while(leftPointer < rightPointer){
    if(array[leftPointer] + array[rightPointer]  === target){
      output.push([array[leftPointer] , array[rightPointer]]);
       leftPointer+=1;
       rightPointer-=1;
    }else if(array[leftPointer] + array[rightPointer] > target){
      rightPointer-=1;
    }else{
    leftPointer+=1;
  }
  }
  return output;
}

//============================================================
// Time complexity O(n) 
// space complexity O(n);

function twoNumberSum(){
  let oldtime = Date.now();
  let hashTable = {};
  let output = [];
  for(let i=0;i<input.length;i++){
    if(hashTable[target - input[i]]){
      hashTable[target - input[i]] > input[i] ? output.push([target - input[i], input[i]]): output.push([input[i],target - input[i]]);      
      hashTable[input[i]] -= 1; 
    }else{
      hashTable[input[i]] = 1;
    }    
  }
  console.log(Date.now()-oldtime);
  console.log(output);
  return output;
}

//=========================================================
// Time complexity O(n^2) 
// space complexity O(1);

function twoNumberSum(){
   let oldtime = Date.now();
let output = [];
for(let i=0;i<input.length-1;i++){
  for(let j=i+1;j<input.length;j++){
    if(input[i]+input[j] === target){
      (input[i] >= input[j])? output.push([input[j] , input[i]]) : output.push([input[i] , input[j]]);
    }
  }
}
  console.log(Date.now()-oldtime);
  return output;
}


console.log(twoNumberSum());
