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

int compute_one_to_n_XOR(int n){
  int remainder = n % 4, ans=0;
  if(remainder == 1){
    ans = 1;
  }else if(remainder == 2){
    ans = n + 1;
  }
  else if (remainder == 0){
    ans = n;
  }
  return ans;
}

void solve(){
  int a, b;
  cin >> a >> b;
  int XOR = compute_one_to_n_XOR(a - 1), ans = a;
  if (XOR == b){
    ans = a;
  }else if ((XOR ^ b) == a){
    ans = a + 2;
    int c = XOR ^ b;   
  }
  else if ((XOR ^ b) != a){
    ans = a + 1;
  }
  cout << ans<< endl;
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