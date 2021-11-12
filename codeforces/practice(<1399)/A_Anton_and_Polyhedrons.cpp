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
  map<string, int> m;
  m["Tetrahedron"] = 4;
  m["Cube"] = 6;
  m["Octahedron"] = 8;
  m["Dodecahedron"] = 12;
  m["Icosahedron"] = 20;
  ll sum = 0;
  while (n--){
    string t;
    cin >> t;
    sum += m[t];
  }
  cout << sum;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  while(T--){
    solve();
  }
  return 0;
}