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
  int a = 0, b = 0, c = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size();i++){
    if(s[i] == 'A'){
      a++;
    }
     if(s[i] == 'B'){
      b++;
    }
     if(s[i] == 'C'){
      c++;
    }
  }
  if(a+c == b){
    cout << "YES" << endl;

  }else{
    cout << "NO" <<endl;
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  cin >> T;
  while(T--){
    solve();
  }
  return 0;
}