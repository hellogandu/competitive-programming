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
  ll a, b, x,y,z;
  cin >> a >> b;
  if(  b==1 ){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
    x = a * b;
    y = a;
    z = x + y;
    cout << x << " " << y << " "<< z << endl;
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