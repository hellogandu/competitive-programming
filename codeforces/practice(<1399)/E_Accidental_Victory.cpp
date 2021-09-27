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
  vector<ll> arr(n), copyarr(n);
  loop(i, 0, n-1){
    cin >> arr[i];
  }
  copyarr = arr;
  sort(arr.begin(), arr.end());
  ll sum = arr[0], min_win_value = 0, count=n;
  loop(i, 1, n-1){
    if(sum < arr[i]){
      min_win_value = arr[i];
      count = n-i;
    }
    sum += arr[i];
  }
  cout << count << endl;
  loop(i, 0, n - 1){
    if(min_win_value <= copyarr[i]){
      cout<< i+1<<" ";
    }
  }
  cout << endl;
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