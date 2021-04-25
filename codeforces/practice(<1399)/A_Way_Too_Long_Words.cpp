#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n;
  cin >> n;
  while(n--){
    string str;
    cin >> str;
    int len = str.length();
    if(len < 11){
      cout << str << endl;
    }
    else{
      cout << str[0] << len - 2 << str[len - 1] << endl;
    }
  }
  return 0;
}
