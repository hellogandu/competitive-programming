#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;
  bool ans = false;
  for (int i = 0; i < str.length(); i++){
    if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
      ans = true;
    }
  }
  ans ? cout << "YES" : cout << "NO";
  return 0;
}