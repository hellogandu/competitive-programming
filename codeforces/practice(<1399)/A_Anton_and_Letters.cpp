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
  char s;
  // cin >> s;
  // int len = s.length();
  vector<int> v(26);
  while(true){
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z'){
      v[c - 'a'] = 1;
    }
    if(c == '}'){
      break;
    }
  }
  int c = 0;
  loop(i,0,25){
    if (v[i]){
      c++;
    }
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