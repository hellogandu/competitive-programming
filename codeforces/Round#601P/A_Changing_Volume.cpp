#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i <= b; i++)


void solve(){
  ll a, b, ans = 0, diff =0;
  cin >> a >> b;
  diff = abs(a - b);
  if(diff >= 5){
    ans += diff / 5;
    diff = diff % 5;
  }
  if(diff >= 2 ){
    ans += diff / 2;
    diff = diff % 2;
  }
  if(diff == 1 ){
    ans += 1;
  }
  cout << ans << endl;
  return;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--){
    solve();
  }
  return 0;
}