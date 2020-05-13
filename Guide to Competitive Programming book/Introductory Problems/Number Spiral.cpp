#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i <= b; i++)

void solve(){
  ull x , y;
  cin>>x>>y;  
  if(x>=y){
      if(x&1){
	  x-=1;
       cout<< x*x + y <<endl;
      }else{
       cout<< x*x - y + 1<<endl;
      }  
  }else{
    if(y&1){
      cout<< y*y - x + 1<<endl;
    }else{
	y-=1;
	cout<<y*y + x <<endl;
    }
  }
  return;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

 ll T;
 cin>>T;
 while(T--){ 
  solve();
 }
 return 0;
}
