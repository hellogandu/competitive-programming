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
  int n, e=0,o=0, sum=0;
  cin >> n;
  while(n--){
    int t;
    cin >> t;
    sum += t;
    if(t&1){
      o++;
    }else{
      e++;
    }
  }
  
  if (sum & 1){
    cout << "YES" << endl;
    return;
  }
  if (o && e){
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
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