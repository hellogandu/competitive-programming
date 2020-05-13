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
 ll n;
 cin>>n;
 if(n<4 && n>1){
   cout<<"NO SOLUTION"<<endl;
   return ;
   }
  for(ll i=2;i<=n;i+=2){
    cout<<i<<" ";
  }
  for(ll i=1;i<=n;i+=2){
    cout<<i<<" ";
  } 
	return ;
 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
 solve();
 
 return 0;
}
