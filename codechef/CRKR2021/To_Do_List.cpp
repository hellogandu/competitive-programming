#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n, x;
  ll sum = 0;
  cin >> n >> x;
  while(n--){
    int h;
    cin >> h;
    sum += h;
  }
  if(sum + x > 24){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0;
}
