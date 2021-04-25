#include<bits/stdc++.h>
using namespace std;
 

int main(){
  long long int n, lunchBreak, maxJoy = LONG_MIN;
  cin >> n >> lunchBreak;
  while (n--){
    long long int f, t;
    cin >> f >> t;
    if (t <= lunchBreak){
      maxJoy = max(maxJoy, f);
    }
    else{
      f = f - (t - lunchBreak);
      maxJoy = max(maxJoy, f);
     }
     
  }
  cout << maxJoy;

  return 0;
}