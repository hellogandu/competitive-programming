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


bool check(ll n){
    if(n % 11 == 0 || n % 111 == 0 || n >= 1111){
      return true;
    }
    while(n >= 111 ){
      if(n % 11 == 0 || n % 111 == 0){
        return true;
      }
      n -= 111;
    }
    if( n%11== 0 ){
      return true;
    }
    return false;
}


void solve(){
  ll n, ans = 0;
  cin >> n;
    if(check(n)){
      cout <<"YES" << endl;
    }else{
      cout <<"NO" << endl;
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