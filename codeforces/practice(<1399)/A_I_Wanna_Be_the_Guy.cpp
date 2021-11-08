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
  int n;
  cin >> n;
  vector<int> v(n, 0);
  int x;
  cin >> x;
  loop(i,0,x-1){
    int t;
    cin >> t;
    v[t-1] = 1;
  }
  int y;
  cin >> y;
  loop(i,0,y-1){
    int t;
    cin >> t;
    v[t-1] = 1;
  }

  loop(i,0,n-1){
    if (v[i] == 0){
      cout << "Oh, my keyboard!";
      return;
    }
  }
  cout << "I become the guy.";
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