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
  ll a, b, c, m;
  cin >> a >> b >> c >> m;
  vector<ll> arr(3);
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  sort(arr.begin(), arr.end());
  ll min_m = arr[2] - arr[0] - arr[1] -1 ;
  ll max_m = arr[2] + arr[0] + arr[1] -3 ;
  if( m <= max_m && m>=min_m ){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
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