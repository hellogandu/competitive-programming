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
  int a, c = 0;
  vector<int> arr {100, 20, 10, 5, 1};
  cin >> a;
  loop(i , 0 ,4 ){
    c += a / arr[i];
    a = a % arr[i];
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