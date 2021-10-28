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
 int n, ans=0,sum=0;
 cin >> n;
 while (n--){
   int t;
   cin >> t;
   sum += t;
   if(sum < 0){
     ans += abs(sum);
     sum = 0;
   }
 }
 cout << ans;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  // cin >> T;
  while(T--){
    solve();
  }
  return 0;
}