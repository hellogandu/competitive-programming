#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  double ans;
  for (int i = 0; i < n;i++){
    int j;
    cin >> j;
    ans += (double)j / 100.0;
  }
  cout << (ans / (double)n) * 100.0;
  return 0;
}