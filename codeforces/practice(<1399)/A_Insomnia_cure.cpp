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
  int x1, x2, x3, x4, n, c=0;
  cin >> x1 >> x2 >> x3 >> x4 >> n;
  loop(i,1,n){
    if(i%x1==0 || i%x2==0 || i%x3==0 || i%x4==0){
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