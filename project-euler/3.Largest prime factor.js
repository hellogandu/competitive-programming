function LargestPrimeFactor(num){
  let i=2;
  let ans = i; 
  while(num>1){
    while(num%i==0){
      num = num/i;
      ans = i;
    }
    i++
  }
  return ans;
  
}
console.log(LargestPrimeFactor(600851475143)); //6857
console.log(LargestPrimeFactor(13195)); //29