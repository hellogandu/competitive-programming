#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  n = n - 10;
  if(n == 11 || (n < 10 && n > 0)){
    cout << "4";
  }else if(n == 10){
    cout << "15";
  } else {
    cout << "0";

  }

  return 0;
}