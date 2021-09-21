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
  ll n, max_pow = 0;
  cin >> n;
  vector<ll> army(n);
  for (int i = 0; i < n;i++){
    cin>> army[i];
    max_pow += army[i];
  }
  sort(army.begin(), army.end());
  ll m;
  cin >> m;
  while (m--){
    ll d, p;
    cin >> d >> p;
    ll l = 0, r = n-1, mid, ans = LONG_LONG_MAX;
    while(l<=r){
      mid = l + (r - l) / 2;
      ll pow = army[mid], def = max_pow - army[mid];
      if(pow <= d ){
        ans = min(ans, d - pow + ( def - p >= 0 ? 0 :  p - def ));
        l = mid + 1;
      }
      else{
        ans = min(ans, ( def - p >= 0 ? 0 :  p - def ));
        r = mid - 1;
      }
     }
     cout << ans<<endl;
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  // cin >> T;
  while(T--){
    solve();
  }
  return 0;
}