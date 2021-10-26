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
  int n,a=0,b=0;
  cin >> n;
  while(n--){
    int t;
    cin >> t;
    if(t == 1){
      a++;
    }else{
      b++;
    }
  }
  b = b % 2;
  a = a - (b*2);
  if (a >= 0 && a % 2 == 0 ){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
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