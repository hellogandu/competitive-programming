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
  ll n, h;
  cin >> n >> h;
  vector<ll> v(n);
  loop(i,0,n-1){
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  ll max1 = v[n - 1];
  ll max2 = v[n - 2], count=0;

   count = h / (max1 + max2);
   h = h % (max1 + max2);
   count = count * 2;
   while (h > 0)
   {
     if (h > 0)
     {
       h -= max1;
       count++;
     }
     if (h > 0)
     {
       h -= max2;
       count++;
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