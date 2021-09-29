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

int find_min(vector<ll> v, int n, int findex){
  ll min = LONG_LONG_MAX, index = -1;
  for (int i = findex; i < n;i++){
    if(v[i] <= min){
      min = v[i];
      index = i;
    }
  }
  return index;
}

void solve(){
  ll n;
  cin >> n;
  vector<ll> v(n);
  vector<vector<ll>> ans;
  for (auto &it : v){
    cin >> it;
  }

  for (int i = 0; i < n;i++){
    ll index = find_min(v, n, i);
    if (index == i){
      continue;
    }
    ans.push_back({i + 1, index + 1, index - i});
    ll prev = v[i];
    v[i] = v[index];
    for (int j = i + 1; j <= index;j++){
      ll temp = v[j];
      v[j] = prev;
      prev = temp;
    }
  }

  ll count = ans.size();
  cout << count << endl;
  for (int i = 0; i < count;i++){
    cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
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