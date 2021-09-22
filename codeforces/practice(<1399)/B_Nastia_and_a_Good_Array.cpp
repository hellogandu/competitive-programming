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
  ll n, min_value = LONG_LONG_MAX, min_value_index = -1;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++){
    cin >> arr[i];
    if(min_value > arr[i]){
      min_value = arr[i];
      min_value_index = i;
    }
  }
  ll sec_value = min_value + 1;
  cout << n - 1 << endl;
  for (ll i = 0; i < n;i++){
    
    if(i == min_value_index){
      continue;
    }
    if(i%2 == min_value_index%2){
      if(i< min_value_index){
        cout << i+1 << " " << min_value_index+1 << " " << min_value << " " << min_value << endl;
      }
      else{
        cout << min_value_index+1 << " " << i+1 << " " << min_value << " " << min_value << endl;
      }
    }else{
      if(i< min_value_index){
        cout << i+1 << " " << min_value_index+1 << " " << sec_value  << " " <<  min_value<< endl;
      }
      else{
        cout << min_value_index+1 << " " << i+1 << " " << min_value << " " << sec_value  << endl;
      }
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