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
  ll n, x;
  cin >> n >> x;
  vector<ll> v(n), c(n);
  loop(i, 0,n-1){
    cin >> v[i];
  }
  if(n >= (2 * x)){
    cout << "YES" << endl;
    return;
  }

  c = v;
  sort(c.begin(), c.end());

  ll l = n - x ;
  ll r = x;

  loop(i , l, r-1){
    if(c[i] != v[i]){
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
  return;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  cin >> T;
  while(T--){
    solve();
  }
  return 0;
}