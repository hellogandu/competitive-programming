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
  ll a, b;
  cin >> a >> b;
  if(a<=b){
    cout << b - a << endl;
    return;
  }
  if(a%b==0){
    cout << 0 << endl;
    return;
  }
  ll ans = b - (a % b);
  cout << ans << endl;
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