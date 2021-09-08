#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, d;
  cin >> n;
  vector<int> a(n+1);
  vector<int> b(n+1);
  for(int i = 1; i <= n;i++){
    cin >> a[i];
  }
  for(int i = 1; i <= n;i++){
    cin >> b[i];
  }
  for (int i = 1; i <= n;i++){
    b[i] = b[i] - a[i];
  }

  int diff = 0, l=0, k=0;
  for (int i = 1; i <= n; i++){
    if (b[i] < 0){
      cout << "NO" << endl;
      return;
    }
    if(b[i] != 0 ){
      if( l == -1 && k ){
        cout << "NO" << endl;
        return;
      }
      if( l == -1 ){
        l = i;
        k = b[i];
      }else{
        if(b[i]!=k){
          cout << "NO" << endl;
          return;
        }
      }
    }else{
      l = -1;
    }
  
  }
  cout << "YES" << endl;
  return;
}

int main(){
  int T;
  cin >> T;
  while (T--){
    solve();
  }
  return 0;
}