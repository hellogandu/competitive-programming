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
  int n,k, count = 0;
  cin>>n>>k;
  vector<int> v(n);
  loop(i, 0,n-1){
    cin>>v[i];
  }
 loop(i,0,n-1){
    if(v[i] > 0 && v[i] >= v[k-1]){
      count++;
    }
  }
  cout<<count<<endl;
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