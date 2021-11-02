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
  string s, t;
  cin >> s >> t;
  if(s.length() != t.length()){
    cout << "NO" << endl;
    return;
  }
  loop(i,0,s.length()-1){
    if(s[i] != t[t.length()-i-1]){
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
  // cin >> T;
  while(T--){
    solve();
  }
  return 0;
}