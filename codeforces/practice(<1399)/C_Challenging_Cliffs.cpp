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
  vector<ll> cliffs(n);
  for( auto &it : cliffs){
    cin >> it;
  }
  sort(cliffs.begin(), cliffs.end());

  ll first, last, min = LLONG_MAX;
  for (int i = 0; i < n - 1; i++){
      if( abs(cliffs[i] - cliffs[i+1]) < min  ){
        first = cliffs[i];
        last = cliffs[i + 1];
        min = abs(cliffs[i] - cliffs[i + 1]);
      }
  }
  vector<ll> print_later;
  ll temp_last = last;
  cout << first << " ";
  for (int i = 0; i < n; i++){
    if (cliffs[i] < first){
      print_later.push_back(cliffs[i]);
    }else{
      if(first == cliffs[i]){
        first = 0;
        i++;
      }else{
        cout << cliffs[i] << " ";
      }
    }
  }

  for (int i = 0; i < print_later.size();i++){
    cout << print_later[i] << " ";
  }
  cout << last << " " << endl;
  
  
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