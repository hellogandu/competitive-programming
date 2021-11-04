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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a = 0, d = 0;
  loop(i, 0, n - 1){
    if(s[i] == 'D'){
      d++;
    }
    else{
      a++;
    }
  }

  if(a>d){
    cout << "Anton";
  }
  if(a<d){
    cout << "Danik";
  }
  if(a==d){
    cout << "Friendship";
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