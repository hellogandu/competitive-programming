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
  int l = s.length();
  vector<int> v(26, 0);
  loop(i, 0,l-1){
    v[s[i] - 'a'] = 1;
  }
  int c = 0;
  for (int i = 0; i < 26; i++){
    if (v[i]){
      c++;
    }
  }
  if(c & 1){
    cout << "IGNORE HIM!";
  }else{
    cout << "CHAT WITH HER!";
  }
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