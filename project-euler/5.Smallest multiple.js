// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


function SmallestMultiple(num){
  let arr = Array.from({length:num} , (v,i)=>i+1);
  let ans = 1;
  for(let i=1;i<num;i++){
    ans *= arr[i];
    for(let j=i+1;j<num;j++){
      if(arr[j]%arr[i]==0){
        arr[j] = arr[j] / arr[i];
      } 
    }
  }
  return ans;
}

console.log(SmallestMultiple(20)); // 232792560
console.log(SmallestMultiple(10)); // 2520