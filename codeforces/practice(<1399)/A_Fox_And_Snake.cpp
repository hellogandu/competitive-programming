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
  int n, m;
  cin >> n >> m;
  loop(i, 1, n){
    loop(j, 1, m){
      if(i&1){
        cout << "#";
      }else{
        if(i%4==0 && j == 1 ){
          cout << "#";
        }else{
          if(i%2==0 && i%4!=0 && j == m){
             cout << "#";
          }else{
             cout << ".";
          }
        }
      }
    }
    cout << endl;
  }
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