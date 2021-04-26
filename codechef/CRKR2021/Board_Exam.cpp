#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fact( int x, int y=1){
  ll fact = 1;
  for (int i = y+1; i <= x;i++){
    fact = fact * i;
  }
  return fact;
}

ll combination (int n = 10, int x=8){
  ll com = fact(n, x);
  com = com / fact(n - x, 1);
  return com;
}


int main(){
  int T;
  cin >> T;
  while(T--){
    int n, x, y;
    ll ans;
    cin >> n >> x >> y;
    ans = combination(n, x) * combination(n, y);
    cout << ans<< endl;
  }
  return 0;
}
