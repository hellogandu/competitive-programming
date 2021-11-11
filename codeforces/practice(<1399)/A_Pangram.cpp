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
  string s;
  cin >> s;
  vector<int> v(26, 0);
  loop(i,0,n-1){
    int t = s[i];
    if(t>=65 && t<=90){
      v[t - 65] = 1;
    }
    if(t>=97 && t<=122){
      v[t - 97] = 1;
    }
  }
  loop(i,0,25){
     if(v[i] == 0){
       cout << "NO";
       return;
     }
  }
  cout << "YES";
       return;

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