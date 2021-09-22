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
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++){
    int input;
    cin >> input;
    arr[i] = input - i;
  }
  sort(arr.begin()+1, arr.end());

  ll ans = 0;
  unordered_map<int, int> freq;
  for (int i = 1; i <= n; i++){
    freq[arr[i]] += 1;
  }
  for(auto x : freq){
    int term = x.second - 1;
    ans += (ll)((ll)term * (ll)(term + 1)) / 2;
  }
  cout << ans << endl;
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