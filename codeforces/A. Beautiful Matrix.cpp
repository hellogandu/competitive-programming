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
  int x = 0 , y = 0; 
  loop(i , 0 , 4){
  loop(j , 0 , 4){
	  int n;
	  cin>>n;
	  if(n==1){
	    x = i;
	    y = j;
	    break;
	  }
	}
  }
  int ans = abs(x-2) + abs(y-2);
  cout<<ans<<endl;
  return ;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

  solve();
 return 0;
}
