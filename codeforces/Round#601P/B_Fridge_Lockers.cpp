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
  int n, m, min_value = INT_MAX ,second_min_value = INT_MAX, min_value_index=-1, second_min_value_index=-1, cost=0;
  cin >> n >> m;
  vi w(n);
  for (int i = 0; i < n;i++){
    cin >> w[i];
    cost += w[i];
    if (w[i] < min_value){
      second_min_value = min_value;
      second_min_value_index =  min_value_index ;
      min_value = w[i];
      min_value_index = i;
    }
    else if (w[i] < second_min_value){
      second_min_value = w[i];
      second_min_value_index = i;
    }
  }
  if (n <= 2 || n > m){
    cout << "-1" << endl;
    return; 
  }

  cost = 2 * cost + (m-n)*( min_value + second_min_value);
  cout << cost << endl;
  for (int i = 1; i < n;i++){
    cout << i << " " << i+1  << endl;
  }
  cout << 1 << " " << n  << endl;
  for (int i = 0; i < m - n;i++){
    cout << min_value_index << " " << second_min_value_index  << endl;
  }

}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--){
    solve();
  }
  return 0;
}