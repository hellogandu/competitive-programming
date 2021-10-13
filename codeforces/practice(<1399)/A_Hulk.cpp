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
  loop(i ,0, n-1){
    cout << "I ";
    if (i % 2 == 0){
      cout << "hate";
    }
    else{
      cout << "love";
    }
    if(i == n-1){
      cout << " it";
    }else{
      cout << " that ";
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