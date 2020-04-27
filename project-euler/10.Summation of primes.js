// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.




function summationOfPrimes(num){
  let sum = 0;
  let arr = Array.from({length : num +1 } , (v,i)=>i);
  for(let i=2 ; i< Math.sqrt(num);i++){
    if(arr[i]){ 
    for(let j = i*i; j<=num; j = j+i ){
        arr[j] = 0;
       }
    }
   }
 
  for(let i=2;i<num;i++){
    sum += arr[i];
  }
  return sum;
  }

console.log(summationOfPrimes(2000000)); //142913828922