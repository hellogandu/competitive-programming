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
  int n, m=-1;
  cin >> n;
  vector<int> a(n);
  loop(i,0,n-1){
    cin >> a[i];
    m = max(m, a[i]);
  }
  int c = 0;
  loop(i, 0, n - 1){
    c += m - a[i];
    
  }
  cout << c;
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