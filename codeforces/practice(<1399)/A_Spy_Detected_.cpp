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
  vector<int> v(n), c(n);
  loop(i,0,n-1){
    cin >> v[i];
  }
  c = v;
  int num;
  sort(c.begin(), c.end());
  loop(i,1,n-1){
    if(c[i]==c[i-1]){
      num = c[i];
      break;
    }
  }

  loop(i,0,n-1){
    if(v[i]!= num){
      cout << i + 1 << endl;
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