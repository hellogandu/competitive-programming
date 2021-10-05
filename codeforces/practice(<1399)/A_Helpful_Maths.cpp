#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i <= b; i++)

void solve(){
  string s;
  cin >> s;
  int a1 = 0, a2 = 0, a3 = 0;
  for (int i = 0; i < s.length();i++){
    if(s[i] == '1'){
      a1++;
    }
    if(s[i] == '2'){
      a2++;
    }
    if(s[i] == '3'){
      a3++;
    }
  }
  for(int i = 0; i < s.length() ;i++){
      if(i%2){
        cout << "+";
        continue;
      }
      if(a1){
        cout << "1";
        a1--;
        continue;
      }
      if(a2){
        cout << "2";
        a2--;
        continue;
      }
      if(a3){
        cout << "3";
        a3--;
        continue;
      }
  }

}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  // cin >> T;
  while(T--){
    solve();
  }
  return 0;
}