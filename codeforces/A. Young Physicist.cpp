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
  int T , X = 0 , Y = 0 , Z = 0;
  cin>>T;
  while(T--){
	  int x , y , z;
	  cin>>x>>y>>z;
	  X+= x;
	  Y+= y;
	  Z+= Z;
	  }
   if(X==0 && Y==0 && Z==0){
     cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
   return ;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

  solve();
 return 0;
}
