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
  vector<pair<int, int>> pr(n);
  unordered_map<int,int> mp;
  for (int i = 0; i < n; i++){
    int a;
    cin >> a;
    pr[i].first = a;
    pr[i].second = i+1;
    mp[a] += 1;
  }
  for (auto x : mp){
    if(x.second == n ){
      cout << "NO" << endl;
      return;
    }
   }
   cout << "YES" << endl;
   sort(pr.begin(), pr.end());
   for (int i = 1; i < n;i++){
     if(pr[0].first != pr[i].first){
       cout << pr[0].second << " " << pr[i].second << endl;
     }
   }
   for (int i = 1; i < n-1;i++){
     if(pr[0].first == pr[i].first){
       cout << pr[i].second << " " << pr[n-1].second << endl;
     }
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