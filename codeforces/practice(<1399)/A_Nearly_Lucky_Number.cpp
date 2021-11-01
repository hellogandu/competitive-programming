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
   string n;
   cin >> n;
   int c = 0;
   for (int i = 0; i <= n.length()-1; i++){
     if(n[i] == '4' || n[i] == '7' ){
       c++;
     }
   }
   if (c == 4 || c == 7)
   {
     cout << "YES";
   }
   else
   {
     cout << "NO";
   }
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