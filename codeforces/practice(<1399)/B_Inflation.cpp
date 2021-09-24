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

bool AreSame(double a, double b) {
  return fabs(a - b) < numeric_limits<double>::epsilon();
}

ll bs(ll sum,ll price, double coeff){
  ll l = 0,r = price*100,mid, ans = 0;
  
  while(l <= r){
   mid = l + (r - l) / 2;
   double infcoeff = (double) price  / (double)( sum + mid);
   if (infcoeff <= coeff || AreSame(infcoeff, coeff) ){
     ans = mid;
     r = mid - 1 ;
    }else{
     l = mid + 1;
    }
  }
  return ans;
}

void solve(){
  int n, k;
  cin >> n >> k;
  vector<ll> price(n);
  for(auto &it : price){
    cin >> it;
  }
  ll sum = price[0], ans = 0;
  for (int i = 1; i < n;i++){
    double coeff = (double)k / 100;
    ll min_value = bs(sum, price[i], coeff);
    ans += min_value;
    sum += min_value + price[i];    
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