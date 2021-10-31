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
  ll n, ans=0;
  cin >> n;
  vector<int> v{5, 4, 3, 2, 1};
  loop(i,0,4){
    ans += n / v[i];
    n = n % v[i];
  }
  cout << ans;
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