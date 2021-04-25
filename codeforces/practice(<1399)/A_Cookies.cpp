#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, evenCookiesCount = 0, oddCookiesCount = 0;
  cin >> n;
  while(n--){
    int cookies;
    cin >> cookies;
    if(cookies%2 ==0){
      evenCookiesCount++;
    }else{
      oddCookiesCount++;
    }
  }
  if(oddCookiesCount % 2 == 0){
    cout << evenCookiesCount;
  }else{
    cout << oddCookiesCount;
  }
  return 0;
}