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
  string s;
  cin >> s;
  int c = 1, l= s.length();
  if(l < 7){
    cout << "NO" << endl;
    return;
  }
  loop(i, 1, l-1){
    if(s[i] == s[i-1]){
      c++;
    }else{
      c = 1;
    }
    if( c == 7){
      cout << "YES" << endl;
      return;
    }
  }
   cout << "NO" << endl;
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