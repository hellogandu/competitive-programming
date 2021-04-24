#include<bits/stdc++.h>

using namespace std;
int main(){
  string str1, str2;
  cin >> str1 >> str2;

  transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
  transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

  int ans = str1.compare(str2);
  if (ans > 0){
    ans = 1;
  }else if(ans < 0){
    ans = -1;
  }
   cout<< ans;
  return 0;
}