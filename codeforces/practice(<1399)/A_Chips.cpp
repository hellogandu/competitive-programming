#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n, m, ans;
  cin >> n >> m;
  m = m % ((n * (n + 1)) / 2);
  for (int i = 1; i <= n; i++){
    int chip = (i * (i + 1)) / 2;
    if( m-chip == 0){
      ans = 0;
      break;
    }
    if(m-chip < 0){
      ans = m - (i * (i - 1)) / 2;
      break;
    }
  }
  cout << ans;
  return 0;
}