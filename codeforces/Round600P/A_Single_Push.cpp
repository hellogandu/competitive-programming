#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, d;
  cin >> n;
  vector<int> a(n+2);
  vector<int> b(n+2);
  for(int i = 1; i <= n;i++){
    cin >> a[i];
  }
  for(int i = 1; i <= n;i++){
    cin >> b[i];
  }
  for (int i = 1; i <= n;i++){
    b[i] = b[i] - a[i];
    if(b[i] < 0){
      cout << "NO" << endl;
      return;
    }
  }

  // solution : 1  

  int count = 0;
  for (int i = 0; i <= n;i++){
     if(b[i] != b[i+1]){
       count++;
     }
  }
   if(count>2){
     cout << "NO" << endl;
   }
   else{
     cout << "YES" << endl;
   }


  // Solution : 2

  // int minl = 0, maxr = n;
  // for (int i = 1; i <= n;i++){
  //   if(b[i] != 0){
  //      if(minl == 0 ){
  //        minl = i;
  //      }
  //      else{
  //        maxr = i;
  //      }
  //   }
  // }

  // for (int i = minl; i <= maxr; i++)
  // {
  //   if(b[i] != b[minl]){
  //     cout << "NO"<< endl;
  //     return;
  //   }
  // }
  // cout << "YES"<< endl;
  // return;
}

int main(){
  int T;
  cin >> T;
  while (T--){
    solve();
  }
  return 0;
}