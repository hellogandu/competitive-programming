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
   int arr[5][5];
   for(int i=0;i<5;i++){
	   for(int j=0;j<5;j++){
		   arr[i][j] = 0;
		   }
	   }   
   int k;   
   for(int i=1;i<4;i++){
     for(int j=1;j<4;j++){
		 cin>>k;
		arr[i][j] +=k;
		arr[i-1][j] +=k;
		arr[i+1][j] +=k;
		arr[i][j+1] +=k;
		arr[i][j-1] +=k;
   }   
}
for(int i=1;i<4;i++){
     for(int j=1;j<4;j++){
		cout<<1-(arr[i][j] % 2);
   }
   cout<<endl;
}
   return ;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);

  solve();
 return 0;
}
