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
  vector<int> v(4);
  loop(i, 0, 3){
    cin >> v[i];
  }
  int c = 0;
  loop(i, 0, 2){
    loop(j,i+1,3){
      if(v[i]==v[j] && v[i]!=-1){
        c++;
        v[j] = -1;
      }
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