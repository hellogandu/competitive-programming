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

void print(vector<vector<int>> ans ){
  int n = ans.size();
  cout << n << endl;
  for (int i = 0; i < n; i++){
    cout << ans[i][0] << " " << ans[i][1] << endl;
  }
}

void solve(){
  int n;
  cin >> n;
  priority_queue<pair<int, int>> pq;
  vector<pair<int, int>> ans;
  loop(i, 0, n - 1){
    int input;
    cin >> input;
    if(input){
    pq.push({input, i + 1});
    }
  }
  pair<int, int> x, y;
  while(!pq.empty()){
    x = pq.top();
    pq.pop();
    if(pq.empty()){
      break;
    }
    y = pq.top();
    pq.pop();
    
    
    if(x.first>1){
      pq.push({ x.first -1, x.second });
    }
    if(y.first>1){
      pq.push({ y.first -1, y.second });
    }
  
    ans.push_back({x.second, y.second});
  }

  int s = ans.size();
  cout << s << endl;
  loop(i , 0 , s-1){
    cout << ans[i].first << " " << ans[i].second << endl;
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