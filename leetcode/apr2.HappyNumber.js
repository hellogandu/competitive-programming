var sum = (n)=>{
  return Number((n+"").split("").reduce((acc , cv)=>acc += Math.pow(Number(cv) , 2),0));
}
var isHappy = function(n){
  n = sum(n);
  while(n !== 1){
     n = sum(n);
     if(n===4){
      return false;
    }
  }
  return true;
};