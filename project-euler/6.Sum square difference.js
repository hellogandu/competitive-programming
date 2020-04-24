// The sum of the squares of the first ten natural numbers is,

// 12+22+...+102=385
// The square of the sum of the first ten natural numbers is,

// (1+2+...+10)2=552=3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

//================================================================================================

function SumSquareDifference(n){
  let theSquareOfTheSum  = Math.pow((n * (n+1) / 2),2);
  let theSumOfTheSquares  = n * (n+1)*(2*n +1) / 6 ;
 
   return theSquareOfTheSum - theSumOfTheSquares;
 }
 
 console.log(SumSquareDifference(10));  //2640
 console.log(SumSquareDifference(100)); //25164150