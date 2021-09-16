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

bool check_possible(vector<pair<ll, ll>> cave, ll energy){
  for (int i = 0; i < cave.size();i++){
    if(cave[i].first <= energy){
      energy += cave[i].second;
    }else{
      return false;
    }
  }
  return true;
}

void max_energy_requied_in_caves(vector<pair<ll, ll>> cave, int n){
  ll l = cave[0].first, r = cave[n-1].first, mid= l + (r - l) / 2;
  while (l < r){
     mid = l + (r - l) / 2;
     if (check_possible(cave, mid)){ 
       r = mid ;   
     }else{
       l = mid + 1;
     }
  }
  cout << r << endl;
}

void solve(){
  int n;
  cin >> n;
  vector<pair<ll, ll>> caves;
  for (int i = 0; i < n; i++){
    ll x, max_power_required = 0;
    cin >> x;
    for (ll j = 0; j < x; j++){
      ll monster_power, power_required = 0;
      cin >> monster_power;
      power_required = monster_power - j + 1;
      max_power_required = max(power_required, max_power_required);
    }
    caves.push_back({max_power_required, x});
  }
  sort(caves.begin(), caves.end());
  max_energy_requied_in_caves(caves, n);
  return;
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