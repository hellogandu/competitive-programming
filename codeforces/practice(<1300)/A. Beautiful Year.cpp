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

bool check_distincts(int year){
   int arr[4];
   for(int i=0;i<4;i++){
   arr[i]  = year % 10; 
    year /= 10;
   }
   for(int i=0;i<4-1;i++){
	   for(int j= i+1 ;j<4;j++){
		   if(arr[i]==arr[j]) return false;
		   }
	   }
	   return true;
}

void solve(){
  int num;
  cin>>num;
  num+=1;
   while(!check_distincts(num)){
	   num+=1;
	   }
	   cout<<num;
	   return;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

  solve();
 return 0;
}
