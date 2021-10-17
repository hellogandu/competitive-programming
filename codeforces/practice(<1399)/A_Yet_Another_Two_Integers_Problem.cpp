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
  int a, b, ab=0,c = 0;
  cin >> a >> b;
  ab = abs(a - b);
  if(ab >= 10){
    c = ab / 10;
    ab %= 10;
  }
  if(ab){
    c++;
  }
  cout << c << endl;
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