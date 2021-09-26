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
  int n, sum = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n;i++){
    if(i == n-1){
      sum += (int)s[i] - 48 ;
      continue;
    }
    if(s[i] != '0'){
      sum += (int)s[i] - 48 + 1;
    }
  }
  cout << sum << endl;
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