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
  ll n, sum =0;
  cin >> n;
  vector<ll> b(n+2);
  for(auto &it : b){
    cin >> it;
    sum += it;
  }
  sort(b.begin(), b.end());
  ll l = 0, r = n, mid, index = -1, target = sum - ( b[n+1] * 2) ;
  while (l<=r){
    mid = l + (r - l) / 2;
    if (b[mid] == target){
      index = mid;
      break;
    }
    if( b[mid] < target ){
      l = mid + 1;
    }
    else{
      r = mid - 1;
    }
  }

  if(index != -1){
    for (ll i = 0; i <= n ;i++){
      if( index != i ){
        cout << b[i] << " ";
      }
    }
    cout << endl;
  }else{
    sum -= b[n + 1];
    if ( sum - b[n] == b[n] ){
      for (ll i = 0; i < n ;i++){
          cout << b[i] << " ";
      }
      cout << endl;
    }
    else{
      cout << -1 << endl;
    }
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