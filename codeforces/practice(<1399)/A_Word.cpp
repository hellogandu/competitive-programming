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
  int u=0,l=0, len = s.length();
  loop(i , 0, len-1){
    if( s[i] >90){
      l++;
    }else{
      u++;
    }
  }
  if(l < u){
   loop(i , 0, len-1){
    if( s[i] > 90){
      s[i] = s[i] - 32;
    }
  }
  }else{
   loop(i , 0, len-1){
    if( s[i] < 91){
       s[i] = s[i] + 32;
     }
    }

  }
  cout << s;
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