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

void print_bracket(int n){
  for (int i = 0; i < n;i++){
    cout << "(";
  }
  for (int i = 0; i < n;i++){
    cout << ")";
  }
}

void solve(){
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    print_bracket(i);
    print_bracket(n - i);
    cout << endl;
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