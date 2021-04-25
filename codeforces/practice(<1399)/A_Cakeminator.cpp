#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int r, c;
  cin >> r >> c;
  vector<int> vr(r, 1);
  vector<int> vc(c, 1);
  for (int i = 0; i < r;i++){
    for (int j = 0; j < c;j++){
      char s;
      cin >> s;
      if(s == 'S'){
        vr[i] = 0;
        vc[j] = 0;
      }
    }
  }
  int count = 0;
  for (int i = 0; i < r; i++)  {
    for (int j = 0; j < c; j++){
      if(vr[i] || vc[j] ){
        count++;
      }
    }
  }
  cout << count;

  return 0;
}