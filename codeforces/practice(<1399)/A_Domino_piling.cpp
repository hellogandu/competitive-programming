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
  int m, n, ans =0;
  cin >> m >> n;
  if(n%2==0){
    ans = m * n / 2;
  }else if(m%2==0){
    ans = n * m / 2;
  }else{
    ans = ( m / 2  * n) + n / 2;
  }
  cout <<ans<< endl;
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