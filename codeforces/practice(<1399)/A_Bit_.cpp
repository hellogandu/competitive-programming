#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  while(n--){
    string str;
    cin >> str;
    if(str[1] == '+'){
      ans++;
    }else{
      ans--;
    }
  }
  cout << ans;
  return 0;
}