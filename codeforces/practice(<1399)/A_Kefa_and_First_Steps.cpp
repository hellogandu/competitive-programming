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
  ll n, prev=0,c=0, max=0;
  cin >> n;
  while(n--){
    ll t;
    cin >> t;
    if(prev<=t){
      c++;
    }else{
      c = 1;
    }
    prev = t;
    if(max<c){
      max = c;
    }
   
  }
  cout << max;
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