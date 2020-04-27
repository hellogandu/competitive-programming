// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

//==============================================================================================

function specialPythagoreanTriplet(n){
  for(let a =1;a<=n;a++){
      for(let b = a+1 ;b<=n;b++){
        let c = n - a - b;
        if(a*a + b*b === c*c){
          return a*b*c
        }
      }
    } 
  return false;
}

console.log(specialPythagoreanTriplet(1000)) // 31875000