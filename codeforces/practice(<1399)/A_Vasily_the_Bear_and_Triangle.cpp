#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int x, y, x1=0, y1, x2, y2 = 0 ;
  cin >> x>> y;
  if(y>0){
    y1 = abs(x) + abs(y);
  } else{
    y1 = (abs(x) + abs(y)) * -1;
  }
   
   if( x > 0){
     x2 = abs(x) + abs(y);
   }else{
     x2 = (abs(x) + abs(y)) * -1;
   }

   if(x1>x2){
     cout << x2 << " " << y2 << " " << x1 << " " << y1;
   }else{
      cout << x1 << " " << y1 << " " << x2 << " " << y2;
   }

  return 0;
}