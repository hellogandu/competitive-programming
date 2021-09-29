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

void update_ans(vector<string>& ans, int i, int j, int k ){
  ans[i][j] = '*';
  int c = 0;
  while (k > c){
    ans[i-1][j-c-1] = '*';
    ans[i-1][j+c+1] = '*';
    c++;
    i--;
  }
}

void solve(){
  int n, m, k;
  cin >> n >> m >> k;
  vector<string> g(n);
  vector<string> ans(n, string(m, '.'));
  loop(i, 0, n - 1){
    cin >> g[i];
  }
  for(int i = 0; i < n;i++){
    for(int j = 0; j < m;j++){
      int x = i, y = j, count=0;
      if(g[i][j] == '*'){
        count = 0;
        while (x - 1 >= 0 && y - count - 1 >= 0 && y + count + 1 < m && g[x - 1][y - count - 1] == '*' && g[x - 1][y + count + 1] == '*'){
          count++;
          x--;
        }
      }
      if(count >= k){
        update_ans(ans, i, j, count);
      }  
    }
  }
  for(int i = 0; i < n;i++){
    for (int j = 0; j < m;j++){
      if( g[i][j] != ans[i][j]){
        cout << "NO" << endl;
        return;
      }
    }
  }
  cout << "YES"<< endl;
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