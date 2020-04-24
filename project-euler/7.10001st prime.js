// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

//===============================================================================================

function checkPrime(num){
  if(num<=1){return false;}
  for(let i=2;i<=Math.sqrt(num);i++){
    if(num%i==0){return false;}
  }
  return true;
}

function nthPrime(n){
 let counter = 0;
  let i = 2;
  while(true){
    if(checkPrime(i)){
      counter+=1;
    }
    if(counter === n){
      return i;
    }
    i+=1;
  }
}

console.log(nthPrime(10001)); // 104743
console.log(nthPrime(6));  //13