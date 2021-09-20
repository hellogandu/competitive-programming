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
  ll n, count = 0;
  cin >> n;
  vector<ll> arr(n+2);
  for(int i = 1; i <= n; i++ ){
    cin >> arr[i];
  }
  for (int i = 1; i <=n;i++){
    for (int j =  arr[i] - (i % arr[i]) ; j <= n; j+= arr[i]){
        if( i<j && arr[i] * arr[j] == i + j  ){
          count++;
        }
    }
  }
  cout << count << endl;
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